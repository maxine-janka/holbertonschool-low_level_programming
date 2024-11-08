#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line
 *
 * @argc: Number of arguments supplied (size).
 * @argv: An array of arguments supplied.
 *
 * Return: 0 (Success).
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

