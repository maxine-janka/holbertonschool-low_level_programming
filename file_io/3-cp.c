#include "main.h"

/**
 * main - Copies content of a file to another file.
 *
 * @argc: Number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	char buffer[1024];
	ssize_t b_read, b_printed;

	/*pname, source file and dest file passed in*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file\n");
		exit(97);
	}

	/*open source file in rdonly*/
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*open dest file in wronly, if exists trunc, create if it doesnt, give perms*/
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/*Read up to 1024 bytes from source file, copy to buffer*/
	b_read = read(fd_from, buffer, 1024);
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*Copy bytes from buffer to dest file*/
	while (b_read != 0)
	{
		b_printed = write(fd_to, buffer, b_read);
		if (b_printed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		/*Read in 1024 byte chunks until EOF (b_read == 0)*/
		b_read = read(fd_from, buffer, 1024);
	}

	/*Close source and dest file*/
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
