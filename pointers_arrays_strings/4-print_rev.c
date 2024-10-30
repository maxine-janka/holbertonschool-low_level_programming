#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 *
 * @s: String to be printed in reverse
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
		length++;
	}

	for (count = length - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
