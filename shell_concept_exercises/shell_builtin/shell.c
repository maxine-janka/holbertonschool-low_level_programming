#include "shell.h"

/**
 * main - Entry point to simple shell.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char *line, **str;

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

		str = split_string(line);
		child_process(str, environ);
		free(line);
	}
	return (0);
}
