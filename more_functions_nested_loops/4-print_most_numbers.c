#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
 * Followed by a new line
 *
 * Return: nothing
 */

void print_most_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
