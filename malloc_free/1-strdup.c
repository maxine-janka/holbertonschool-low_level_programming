#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - Copies a string
 *
 * @dest: Pointer to the destination array where content is to be copied
 * @src: Input string to be copied
 * @n: The number of characters to be copied from src
 *
 * Return: The pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/**
 * _strdup - Copies a string and returns a pointer to the new allocated space.
 *
 * @str: String to be copied
 *
 * Return: A pointer to duplicate string
 *         Return NULL is string is empty or insufficient memory available.
 */

char *_strdup(char *str)
{
	unsigned int length = 0;
	char *temp = str;
	char *copy;

	while (*temp != '\0')
	{
		temp++;
		length++;
	}
	copy = malloc(length + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	_strncpy(copy, str, length + 1);

	return (copy);

}
