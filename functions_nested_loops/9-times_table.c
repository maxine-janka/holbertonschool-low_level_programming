#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int r;
	int c;
	int prod;

	for (r = 0; r <= 9; r++)

	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
		_putchar(',');
		_putchar(' ');

		prod = r * c;

		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

