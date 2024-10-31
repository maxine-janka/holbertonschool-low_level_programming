#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 *
 * @s: String to be converted
 *
 * Return: An integer converted from a string
 */

int _atoi(char *s)
{
	long int number = 0;
	long int sign = 1;

	while (*s != '\0')
	{
		if (*s == ' ' || *s == '\t')
		{
			s++;
		}
		if (*s == '-')
		{
			sign *= -1;
		}
		if ((*s >= '0') && (*s <= '9'))
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
		{
			break;
		}
		s++;
	}
	return (sign * number);
}
