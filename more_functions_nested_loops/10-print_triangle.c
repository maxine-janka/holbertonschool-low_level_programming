#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by new line
 *
 * @size: Size of triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)

{
	int row;
	int space;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (space = row; space < size; space++)
			{
				_putchar(' ');
			}
			for (space = 1; space <= row; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
