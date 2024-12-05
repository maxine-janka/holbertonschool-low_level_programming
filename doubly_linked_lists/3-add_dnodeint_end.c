#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @n: An integer value for a node in the list.
 *
 * Return: The address of the new element.
 *         Return NULL if it fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
