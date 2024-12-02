#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints all elements of a list_t list.
 *
 * @h: A pointer to the start of the list_t.
 *
 * Return: The total size, or number of nodes in the list_t.
 */

size_t print_list(const list_t *h)
{
	size_t total_size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		total_size++;
	}
		return (total_size);

}
