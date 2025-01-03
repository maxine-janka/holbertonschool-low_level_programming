#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: A pointer to the name of file to create.
 * @text_content: A pointer to a NULL terminated string
 *                to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_printed;
	size_t length;

	if (filename == NULL)
		return (-1);

	/*Open file in write and append mode*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/*No content to append, close file*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/*Get length of char in content*/
	length = strlen(text_content);

	/*Append content to file*/
	b_printed = write(fd, text_content, length);

	/*If write fails*/
	if (b_printed == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
