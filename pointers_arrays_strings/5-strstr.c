#include "main.h"

/**
 * _strstr - Locates a substring within a larger string
 *
 * @haystack: The larger string
 * @needle: The substring to be located in the larger string
 *
 * Return: A pointer to the first character of the located substring.
 *         Returns NULL if substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		}

	}
	return (0);
}
