#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: Input string to print second half
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int half_of_string;
	int index;

	while (str[length] != '\0')
	{
		length++;
	}

	if ((length % 2) != 0)
	{
		half_of_string = (length + 1) / 2;
	}
	else
	{
		half_of_string = length / 2;
	}

	for (index = half_of_string; index < length; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
