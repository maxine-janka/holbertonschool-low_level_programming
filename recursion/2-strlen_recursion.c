#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 *
 *@s: Input string to determine the length
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
