#include "function_pointers.h"
#include <stddef.h>


/**
 * array_iterator - Iterates through an array and executes
 *                  a function on each element of the array.
 *
 * @array: Array to iterate through.
 * @size: The size or number of elements in the array.
 * @action: A pointer to a function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
