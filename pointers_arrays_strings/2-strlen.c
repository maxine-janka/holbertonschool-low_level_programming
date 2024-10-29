#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Input string of chars to determine the length
 *
 * Return: The length of a string
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		s = s + 1;
		length = length + 1;
	}
	return length;
}

