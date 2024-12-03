#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 *
 * @h: A pointer to the head or start of the list.
 *
 * Return: The number of elements/nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t length = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}
	return (length);
}
