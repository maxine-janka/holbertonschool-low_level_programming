#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                            in a dlistint_t.
 *
 * @h: A pointer to a pointer of the start of the list.
 * @idx: An integer representing the position of the new node in the list.
 * @n: An interger representing the value of the new node to be inserted.
 *
 * Return: The address of the new node, or NULL it it failed.
 *         If the specified idx does not exist, return NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_list, *new_node;
	size_t count = 0;

	temp_list = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp_list != NULL)
	{
		if (idx - 1 == count) /* to insert match find node before idx */
		{
			if (temp_list->next == NULL) /* if current node at idx - 1 is last node */
				return (add_dnodeint_end(h, n));

			/* set prev* to current node at idx - 1 */
			new_node->prev = temp_list;
			/* set next* to node at idx */
			new_node->next = temp_list->next;
			/* set prev* of node at idx back to new node */
			temp_list->next->prev = new_node;
			/* set next* of node at idx - 1 to new node */
			temp_list->next = new_node;
			return (new_node);
		}
		temp_list = temp_list->next;
		count++;
	}
	return (NULL); /* if idx is > total nodes in list */

}
