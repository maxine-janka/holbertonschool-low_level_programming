#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @str: Input string
 *
 * Return: A pointer to changed string
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index] != '\0')
	{
		if ((str[index] >= 'a') && (str[index] <= 'z'))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
