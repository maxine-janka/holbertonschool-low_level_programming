#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t length = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
