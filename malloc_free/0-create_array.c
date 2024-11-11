#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *                and initialises it with a specific char.
 *
 * @size: The size of the array to be initialised.
 * @c: The specific charcater to initialise the array.
 *
 * Return: A pointer to the array.
 *         Return NULL if its fails or if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
