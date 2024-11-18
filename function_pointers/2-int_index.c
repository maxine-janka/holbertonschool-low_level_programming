#include "function_pointers.h"
#include <stddef.h>


/**
 * int_index - Searches for an integer in an array.
 *
 * @array: The array to search.
 * @size: The size or number of elements in the array.
 * @cmp: Pointer to the function to compare values.
 *
 * Return: If there are no matching elements, return -1.
 *         If the array size is <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
