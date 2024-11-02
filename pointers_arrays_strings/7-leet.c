#include "main.h"

/**
 * leet - Encodes a string into 1337
 *        a and A replaced by 4
 *        e and E replaced by 3
 *        o and O replaces by 0
 *        t and T replaced by 7
 *        l and L replaced by 1
 *
 * @str: Input string to convert
 *
 * Return: A pointer to a string with replaced characters
 */

char *leet(char *str)
{
	int index = 0;
	int leet_index = 0;

	char leet_num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char leet_letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};


	while (str[index] != '\0')
	{
		leet_index = 0;
		while (leet_index < 10)
		{
			if (str[index] == leet_letter[leet_index])
			{
				str[index] = leet_num[leet_index];
			}
			leet_index++;
		}
		index++;
	}
	return (str);
}
