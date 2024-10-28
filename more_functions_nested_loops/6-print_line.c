#include "main.h"

/**
 * print_line - Prints a line
 *
 * @n: The number of times an _ is printed
 *
 * Return: nothing
 */

void print_line(int n)

{
	int length = 0;

	while (n > length)
	{
		_putchar('_');
		length++;
	}
	_putchar('\n');
}
