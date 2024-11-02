#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Array of integers to be reversed
 * @n: Number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int index;
	int start_of_array;
	int end_of_array;


	for (index = 0; index < n / 2; index++)
	{
		start_of_array = a[index];
		end_of_array = a[n - index - 1];
		a[index] = end_of_array;
		a[n - index - 1] = start_of_array;
	}
}
