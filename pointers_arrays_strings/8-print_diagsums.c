#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 *
 * @a: an element in the array matrix
 * @size: the size of the square matrix
 *
 * Return: Nothing
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i * size + i];
		diag2 = diag2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
