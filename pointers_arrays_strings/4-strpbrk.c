#include "main.h"

/**
 * _strpbrk - Find the first character in a string that matches
 *            any character specified in another string
 *
 *@s: The string to be scanned
 *@accept: The string ocntainding characters to match
 *
 * Return: A pointer to the character in 's' that matches one of the
 *         characters (bytes) in 'accept'
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
