#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 *           to the buffer pointed to by dest
 *
 * @dest: Pointer to array where string is to be copied
 * @src: The string to be copied
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;

		dest[index] = '\0';
	}
	return (dest);
}
