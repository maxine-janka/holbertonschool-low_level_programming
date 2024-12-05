#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 *
 * @head: A pointer to the start of the list.
 *
 * Return: The sum of all the data or 0 is the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
