#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: Pointer to a string
 * @c: Character to locate
 *
 * Return: A pointer to the first occurance of the character
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (c == '\0')
	{
		return (s + i);
	}

	return (0);
}
