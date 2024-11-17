#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of specified number of elements
 *           that are of a certain size in bytes.
 *
 *@nmemb: The number of elements
 *@size: The size of each element in the array in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         Return NULL if nmemb = 0 or if function fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	temp = ptr;

	for (i = 0; i < (nmemb * size); i++)
	{
		temp[i] = 0;
	}

	return (ptr);
}
