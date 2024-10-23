#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 *@n: integer to compare
 *
 * Return: 1 if > 0 and prints +
 *	   0 if n = 0 and prints 0
 *	  -1 if < 0 and prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
