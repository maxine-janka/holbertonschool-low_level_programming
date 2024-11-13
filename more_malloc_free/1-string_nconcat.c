#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	return (length);
}

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
 * string_nconcat - Concatonates two strings
 *
 *@s1: String the be appended.
 *@s2: String to be appended to s1.
 *@n: Number of bytes from s2
 *
 * Return: A pointer to the concatonated string.
 *         Return NULL on function failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length, s2_length;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = _strlen(s1);
	s2_length = _strlen(s2);

	if (n > s2_length)
	{
		n = s2_length;
	}

	concat_str = malloc(s1_length + n + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	_strncpy(concat_str, s1, s1_length);
	_strncat(concat_str, s2, n);

	return (concat_str);
}
