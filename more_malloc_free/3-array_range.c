#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *               with values arranged from min to max.
 *
 *@min: The first integer of the array.
 *@max: The last integer of the array.
 *
 * Return: A pointer to the newly created array.
 *         Return NULL if min > max or if function fails.
 */

int *array_range(int min, int max)
{
	int *new_array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	new_array = malloc(size * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_array[i] = min++;
		i++;
	}
	return (new_array);
}
