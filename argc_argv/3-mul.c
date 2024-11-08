#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result, followed by a new line
 *
 * @argc: Number of arguments supplied (size).
 * @argv: An array of arguments supplied.
 *
 * Return: 0 (Success).
 *         Return 1 if program receives less than two arguments (Error).
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mult;

		mult = (num1 * num2);

		printf("%d\n", mult);
	}
	return (0);
}
