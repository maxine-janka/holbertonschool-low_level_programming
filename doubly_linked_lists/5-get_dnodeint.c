#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 *
 * @head: A pointer to the head of the list.
 * @index: The integer representing the nth node to find in the list.
 *
 * Return: The nth node of the list.
 *         If no node exists, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t node = 0;

	while (temp != NULL)
	{
		if (node == index)
			return (temp);
		node++;
		temp = temp->next;
	}
	return (NULL);
}
