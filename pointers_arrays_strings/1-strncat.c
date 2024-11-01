#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            a specified number of bytes from src
 *
 * @src: Pointer to string to be appended to dest
 * @dest: Pointer to concatonated, resulting string
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int s_index;
	int d_index = 0;

	while (dest[d_index] != '\0')
	{
		d_index++;
	}

	for (s_index = 0; s_index < n && src[s_index] != '\0'; s_index++)
	{
		dest[d_index + s_index] = src[s_index];
	}
	dest[d_index + s_index] = '\0';

	return (dest);
}
