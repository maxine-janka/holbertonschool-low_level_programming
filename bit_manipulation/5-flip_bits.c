#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get
 *             from one number to another.
 *
 * @n: The number to modify.
 * @m: The number to compare and flip n to.
 *
 * Return: The number of bits needed to flip n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int diff;

	/*XOR to compare each bit of n and m, 1 if different, 0 if same*/
	diff = n ^ m;

	/*count differing bits*/
	while (diff > 0)
	{
		/*Check bit on far right*/
		count = count + (diff & 1);
		/*shift all bits of diff to right to remove*/
		diff = diff >> 1;
	}
	/*total num of differing bits*/
	return (count);
}
