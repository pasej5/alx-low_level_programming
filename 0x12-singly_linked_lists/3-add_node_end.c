#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds new node at the beginning
 * @head: points to the the headof the list
 * @str: string to be copied
 *
 * Return: return the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node, *last;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->len = length;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
	}
	last->next = new_node;

	return (new_node);
}
