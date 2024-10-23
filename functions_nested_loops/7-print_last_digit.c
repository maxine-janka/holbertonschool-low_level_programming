#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 *
 *@i: integer to print its last value
 *
 * Return: last digit of i
 */

int print_last_digit(int i)
{
	int last_digit = (i % 10);

	if (last_digit < 0)
	{
		last_digit = (last_digit * -1);
	}
	_putchar(last_digit + '0');

	return (last_digit);

}
