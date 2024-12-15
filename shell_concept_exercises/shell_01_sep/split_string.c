#include "shell.h"

/**
 * split_string - Splits the user innput and stores in an array.
 *
 * @line: A pointer to a string (user input).
 *
 * Return: An array of commands.
 */
char **split_string(char *line)
{
	char *token, **str;
	int i = 0;

	str = malloc(sizeof(char *) * 1024);
	if (str == NULL)
	{
		perror("malloc fail");
		free(str);
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

	return (str);
}
