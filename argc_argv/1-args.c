#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: Number of arguments supplied (size).
 * @argv: An array of arguments supplied.
 *
 * Return: 0 (Success).
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
