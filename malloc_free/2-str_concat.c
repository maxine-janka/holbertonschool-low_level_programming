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

/**
 * str_concat - Concatonates two strings and allocates a new location in memory
 *              for the concatonated string
 *
 *@s1: Pointer to string concatonated string
 *@s2: Pointer to string to append to s1.
 *
 * Return: A pointer to new allocation in memory of concatonated string.
 *         Return NULL if passing an empty string and on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *temp_s1 = s1;
	char *temp_s2 = s2;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	char *destination;

	if (s1 && s2 == NULL)
	{
		return (NULL);
	}
	while (*temp_s1 != '\0')
	{
		temp_s1++;
		length_s1++;
	}
	while (*temp_s2 != '\0')
	{
		temp_s2++;
		length_s2++;
	}

	destination = malloc(length_s1 + length_s2 + 1);

	if (destination == NULL)
	{
		return (NULL);
	}

	 _strncpy(destination, s1, length_s1);

	 _strncat(destination, s2, length_s2);

	return (destination);
}
