#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs simple arthmetic operations and prints the result
 *
 * @argc: The number of arguments
 * @argv: An array of arguments as strings.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	printf("%d\n", f(num1, num2));

	return (0);
}
