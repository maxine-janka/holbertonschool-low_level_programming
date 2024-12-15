#include "shell.h"

/**
 * execute_command - Executes a command using execve.
 *
 * @line: A pointer to a string.
 * @environ: Environment variables.
 *
 * Return: Nothing.
 */
void execute_command(char *line, char **environ)
{
	char *token;
	int i = 0, status;
	pid_t child;
	char **str;

	str = malloc(sizeof(char *) * 1024);
	if (str == NULL)
	{
		perror("malloc fail");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, " \n\t");
	while (token != NULL)
	{
		str[i] = token;
		token = strtok(NULL, " \n\t");
		i++;
	}
	str[i] = NULL;

	child = fork();
	if (child == -1)
	{
		perror("Error forking");
		free(str);
		return;
	}
	if (child == 0)
	{
		if (execve(str[0], str, environ) == -1)
		{
			perror("Error");
			free(str);
			exit(EXIT_FAILURE);
		}
	}
		else
			wait(&status);
	free(str);
}
