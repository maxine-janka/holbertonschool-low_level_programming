#include "main.h"

/**
 * _strcat: Concatenates two strings
 *
 * @src: String to appended
 * @dest: Pointer to concatonated resulting string
 *
 * Return: Pointer to the concatonated string
 */

char *_strcat(char *dest, char *src)
{
	int d_index = 0;
	int s_index = 0;

	while (dest[d_index] != '\0')
	{
		d_index++;
	}

	while (src[s_index] != '\0')
	{
		dest[d_index] = src[s_index];
		d_index++;
		s_index++;
	}
	dest[d_index] = '\0';
	return (dest);

}
