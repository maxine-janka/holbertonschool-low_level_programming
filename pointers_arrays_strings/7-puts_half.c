#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Input string to determine the length
 *
 * Return: length on a string
 */

int  _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _puts - Prints a string, followed by a new line
 *
 * @str: String to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)

{
	int ch;

	for (ch = 0; str[ch] != '\0'; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}

/**
 * puts_half - Prints the second half of a string
 *
 * @str: Input string to print the second half
 *
 * Return: Nothing
 *
 */

void puts_half(char *str)
{
	long length = _strlen(str);
	char *half;

	if (length % 2 == 0)
	{
		half = &str[length / 2];
	}
	else
	{
		half = &str[(length - 1 / 2)];
	}
	_puts(half);
}
