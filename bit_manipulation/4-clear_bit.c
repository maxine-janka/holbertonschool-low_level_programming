#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to a number to modify.
 * @index: Index position, starting at 0, to change to 0.
 *
 * Return: 1 on success, -1 on fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if index is > num of bits and calc total num of bits*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/*Take current value of n and invert/clear bit at specified index*/
	*n = *n & ~(1 << index);
	return (1);
}
