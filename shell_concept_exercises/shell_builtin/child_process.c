#include "shell.h"

/**
 * child_process - Creates a child process and executes the program.
 *
 * @str: A pointer to an array (commands).
 * @environ: Environment variables.
 *
 * Return: Nothing.
 */

void child_process(char **str, char **environ)
{	
	pid_t child;
	int status;

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
