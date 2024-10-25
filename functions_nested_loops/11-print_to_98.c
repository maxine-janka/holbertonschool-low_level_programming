#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all naturl numbers from n to 98
 *
 * @n: Integer to start counting from
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}

	else
	{
		for ( ; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
