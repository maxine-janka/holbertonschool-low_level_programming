#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times, each on a new line
 *
 * Return: nothing
 */

void more_numbers(void)

{
	int row;
	int n;

	for (row = 0; row <= 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if ((n >= 10) && (n <= 14))
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
