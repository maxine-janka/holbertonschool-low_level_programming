#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2D array
 *              with each element initialised to 0.
 *
 *@width: The width of the 2D array.
 *@height: The height of the 2D array.
 *
 * Return: A pointer to the 2D array.
 *         Return NULL if width or heigh is <= 0 and on failure.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int c, r;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for rows*/
	arr = (int **)malloc(height * sizeof(int *));
	/* if malloc fails return NULL*/
	if (arr == NULL)
	{
		return (NULL);
	}
	/* Allocate memory to elements in row*/
	for (r = 0; r < height; r++)
	{
		arr[r] = (int *)malloc(sizeof(int) * width);
		/* If memory allocation fails for any row, free and return NULL*/
		if (arr[r] == NULL)
		{
			for (c = 0; c < r; c++)
			{
				free(arr[c]);
			}
			free(arr);
			return (NULL);
		}
	}
	/* Initialise each element to 0*/
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			arr[r][c] = 0;
		}
	}
	return (arr);
}
