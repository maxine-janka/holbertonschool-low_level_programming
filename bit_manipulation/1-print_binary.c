#include "main.h"

/**
 * print_binary - Prints a binary representation of a numner.
 *
 * @n: Number to print in binary.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	/*Recursive condition*/
	if (n > 1)
		/*right-shift n by 1 bit, or divide by 2 recursively*/
		print_binary(n >> 1);
	/*Convert binary to ASCII '0' or '1'*/
	_putchar((n & 1) + '0');
}
