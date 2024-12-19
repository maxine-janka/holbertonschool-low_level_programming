#include "shell.h"

/**
 * print_env - Prints the current environment.
 *
 * @environ: A pointer to the array that lists environ variables.
 *
 * Return: 0 on success.
 */
int print_env(char **environ)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}

/**
 * get_builtin - Check if command is a built-in.
 *
 * @str: A pointer to an array of commands from strtok.
 * @environ: A pointer to an array that lists environment variables.
 *
 * Return: 0 on success.
 */
int get_builtin(char **str, char **environ)
{
	if (strcmp(str[0], "exit") == 0)
	{
		free(str);
		exit(0);
	}
	else if (strcmp(str[0], "env") == 0)
	{
		print_env(environ);
		free(str);
		return (1);
	}
	return (0);
}
