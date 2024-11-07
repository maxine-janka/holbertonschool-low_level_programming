#include "main.h"

/**
 * puts_recursion - Prints a string, followed by a new line
 *
 * @s: String to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
