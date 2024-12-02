#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: A pointer to a pointer to the start of the list_t
 * @str: the string or data to store in the new node.
 *
 * Return: The address of the new element.
 *         Return NULL if the malloc fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length;
	const char *temp_str = str;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	length = 0;
	while (*temp_str != '\0')
	{
		temp_str++;
		length++;
	}

	temp->str = strdup(str);
	temp->len = length;
	temp->next = *head;
	*head = temp;

	return (temp);
}
