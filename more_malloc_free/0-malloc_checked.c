#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 *@b: Size of or number of bytes to be allocated.
 *
 * Return: A pointer to allocated memory.
 *         Exit code 98 is malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
