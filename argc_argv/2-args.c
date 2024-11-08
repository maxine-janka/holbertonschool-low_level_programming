#include <stdio.h>

/**
 * main - Prints the arguments it recieves, including the first one
 *
 * @argc: Number of arguments supplied (size).
 * @argv: An array of arguments supplied.
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
