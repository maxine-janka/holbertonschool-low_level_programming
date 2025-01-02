#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 *                 standard output.
 *
 * @filename: A pointer to the file name to read.
 * @letters: The number of characters to read and print from the file.
 *
 * Return: The number of characters it could read and print.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_printed;
	char *buffer;

	/*Make sure file isn't empty*/
	if (filename == NULL)
		return (0);

	/*Open file in read-onloy mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*Allocate mem to hold letters*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*Read file content store letter bytes in buffer */
	b_read = read(fd, buffer, letters);
	if (b_read == -1)
		return (0);
	/*Write bytes stored in buffer to stdout*/
	b_printed = write(STDOUT_FILENO, buffer, b_read);

	if (b_printed == -1)
		return (0);

	/*Close fd*/
	if (close(fd) == -1)
		return (0);

	free(buffer);
	/*Return num of bytes*/
	return (b_read);
}
