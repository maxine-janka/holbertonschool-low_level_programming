#include "main.h"

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
