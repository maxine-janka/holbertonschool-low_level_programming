#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at specified index
 *                            of a dlistint_t.
 *
 * @head: A pointer to a pointer to the start of the list.
 * @index: The integer representing the node to delete in the list.
 *
 * Return: 1 on success and -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	size_t count = 0;

	if (temp == NULL) /* empty list */
		return (-1);
	if (index == 0)
	{
		/* update orginal head to new head*/
		(*head) = temp->next; /* point head to next */
		if ((*head) != NULL) /* make sure new head isnt NULL*/
			(*head)->prev = NULL;
		return (1);
	}
	while (temp != NULL)
	{
		if (index == count)
		{
			if (temp->next == NULL)
			{
				/* set nextp  of prev node */
				temp->prev->next = NULL;
				return (1);
			}
			/* match found, set nextp of prev node to next node */
			/*set prevp of next node to prev node */
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
