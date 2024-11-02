#include "main.h"

/**
 * cap_string - Capitalises the start of every word in a string
 *
 * @str: Input string
 *
 * Return: Changed string with capital for every word
 */

char *cap_string(char *str)
{
	int index = 0;

	if (index == 0)
	{
		if ((str[index] >= 'a') && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}

	while (str[index] != '\0')
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}
		if
		(str[index - 1] == ' ' || str[index - 1] == '\n' || str[index - 1] == '\t' ||
		str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' ||
		str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' ||
		str[index - 1] == '(' || str[index - 1] == ')' || str[index  - 1] == '{' ||
		str[index - 1] == '}')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
