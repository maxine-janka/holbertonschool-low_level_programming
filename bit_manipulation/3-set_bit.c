#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to a number to modify.
 * @index: Index position to change to 1.
 *
 * Return: 1 on success, -1 on fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*Check if index is > num of bits and calc total num of bits*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/*Take current value of n and set bit at index to 1*/
	*n = *n | (1 << index);
	return (1);
}
