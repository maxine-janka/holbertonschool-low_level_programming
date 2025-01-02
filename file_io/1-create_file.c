#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 *
 * @filename: A pointer to the name of file to create.
 * @text_content: A pointer to a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_printed;
	size_t length;

	if (filename == NULL)
		return (-1);

	/*Open file in write only, set perms to rw only for owner*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	/*Nothing to write, close, empty file created*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	/*Get number of chars*/
	length = strlen(text_content);

	/*Write content to file*/
	b_printed = write(fd, text_content, length);
	if (b_printed == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
