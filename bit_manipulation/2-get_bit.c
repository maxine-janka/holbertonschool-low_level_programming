#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Given number to process and extract a specific bit.
 * @index: The index or position starting from 0 we want to extract.
 *
 * Return: The value of the bit, or -1 if error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*check if index is > max bit position and convert size in bytes to bits*/
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	/*Right shift to extract bit at specified index*/
	return ((n >> index) & 1);
}
