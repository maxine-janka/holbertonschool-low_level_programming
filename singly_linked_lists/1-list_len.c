#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - Gets the number of elements in a link_t list.
 *
 * @h: A pointer to the start of the list_t.
 *
 * Return: The number of elements in the linked link_t list.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
