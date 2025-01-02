#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars (binary number).
 *
 * Return: The converted number or 0 if b is NULL or one or more chars
 *         that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, num = 0;
	int length = 0;

	if (b == NULL)
		return (0);

	/*Get length of string*/
	while (b[length] != '\0')
		length++;

	while (length > 0)
	{
		/*Check for valid binary num*/
		if (b[length - 1] != '0' && b[length - 1] != '1')
			return (0);

		/*Value of binary position added to num*/
		if (b[length - 1] == '1')
			num = num + base;
		/*Update the base*/
		base = base * 2;
		/*move from right to left*/
		length--;

	}
	return (num);
}
