#include "main.h"

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
