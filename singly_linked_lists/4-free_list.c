#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list;
 *
 * @head: A pointer to the start of the list_t.
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;

		free(temp->str);
		free(temp);
		temp = next_node;
	}
}
