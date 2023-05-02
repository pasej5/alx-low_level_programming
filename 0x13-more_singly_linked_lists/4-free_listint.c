#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this function frees the list
 * @head: pointer to the list
 *
 * Return: 0 on succes
 */
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
