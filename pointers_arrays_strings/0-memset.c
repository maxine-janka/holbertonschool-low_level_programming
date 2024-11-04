#include "main.h"

/**
 * _memset - Fills the first 'n' bytes (block) of memory
 *           pointed to by 's' with the constant byte 'b'
 *
 * @s: A pointer to the block of memory where values will be set
 * @b: the value to be set
 * @n: the number of bytes for which to set the value 'b'
 *
 * Return: A pointer to the block of memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
