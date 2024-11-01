#include "main.h"

/**
 * _strcmp - Compares two strings until if finds a difference
 *           or reaches the end
 *
 * @s1: Defines the first string
 * @s2: Defines the second string to compare with the first
 *
 * Return: 0, if the strings are equal
 *         -ve, if the first string is lexicographically shorter
 *         +ve, if the first string is lexicographically greater
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
