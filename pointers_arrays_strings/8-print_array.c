#include <stdio.h>

/**
 * print_array - Prints the n elements of an array of integers,
 *               followed by a new line
 *
 * @a: The specified array
 * @n: The element of the array to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index < (n - 1))

		printf("%d, ", a[index]);

		else
		{
			printf("%d", a[index]);
		}
		index = index + 1;
	}
	printf("\n");
}
