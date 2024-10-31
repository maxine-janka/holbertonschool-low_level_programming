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
	while (*src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
		*dest = '\0';
	}
	return (dest);
}
