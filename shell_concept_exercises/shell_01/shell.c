#include "shell.h"

/**
 * main - Entry point to simple shell.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char *line;

	while (1)
	{

		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		line = read_line();
		if (*line == '\n')
		{
			free(line);
			continue;
		}

		execute_command(line, environ);
		free(line);
	}
	return (0);
}
