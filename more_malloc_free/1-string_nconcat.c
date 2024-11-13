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
	unsigned int s1_length, s2_length, i, j;
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
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat_str[i + j] = s2[j];
	}

	concat_str[i + j] = '\0';

	return (concat_str);
}
