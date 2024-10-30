#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function that reverses a string
 *
 * @s: String to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int index;
	char end_of_string;
	char start_of_string;

	while (s[length] != '\0')
	{
		length++;
	}
	length = length - 1;
	for (index = 0; index <= length / 2; index++)
	{
		start_of_string = s[index];
		end_of_string = s[length - index];
		s[index] = end_of_string;
		s[length - index] = start_of_string;
	}
}
