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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
