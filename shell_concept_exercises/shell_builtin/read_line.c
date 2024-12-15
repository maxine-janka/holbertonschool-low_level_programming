#include "shell.h"

/**
 * read_line - Reads a line of input from the user.
 *
 * Return: Pointer to the input string, or NULL on EOF.
 */
char *read_line(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	int bytes_read;

	bytes_read = getline(&buffer, &buffer_size, stdin);


	if (bytes_read == -1)
	{
		free(buffer);
		exit(0);
	}
	return (buffer);
}
