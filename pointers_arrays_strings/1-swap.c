#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Integer to be swapped to value of b
 * @b: Integer to be swapper to value of a
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
