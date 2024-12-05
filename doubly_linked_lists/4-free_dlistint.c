#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next_node;

	temp = head;

	while (temp != NULL)
	{
		next_node = temp->next; /* Save the next node */
		free(temp); /* Free current code */
		temp = next_node; /* Move to next node */
	}
}
