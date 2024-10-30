#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character
 *         followed by a new line
 *
 * @str: input string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int ch;

	for (ch = 0; str[ch] != '\0'; ch++)
	{
		if (ch % 2 == 0)
		{
		_putchar(str[ch]);
		}
	}
	_putchar('\n');
}
