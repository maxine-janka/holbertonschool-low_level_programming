#include "shell.h"

/**
 * _strlen - Counts the number of characters in a string.
 *
 * @str: input string.
 *
 * Return: the length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
