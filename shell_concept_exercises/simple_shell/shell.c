#include "shell.h"

/**
 * main - Entry point to simple shell.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char *line, **str = NULL;
	int check_builtin;

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
		if (str == NULL)
		{
			free(line);
			continue;
		}
		check_builtin = get_builtin(str, environ);
		if (check_builtin == 1)
			continue;

		child_process(str, environ);
		free(line);
	}
	return (0);
}
