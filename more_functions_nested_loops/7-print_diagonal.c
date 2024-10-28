#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 *
 * @n: the number of times \ is printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int row;
	int space;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

