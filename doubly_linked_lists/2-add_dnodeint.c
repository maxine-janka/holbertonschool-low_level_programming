#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t.
 *
 * @head: A pointer to a pointer to the start of the list.
 * @n: An integer value for a node in the list.
 *
 * Return: The address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	
	if ((*head) != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
