#include <stdio.h>
#include <stdlib.h>
#include "stdlib.h"
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the first element of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the nth node of the list, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	if (i != index || current_node == NULL)
		return (NULL);

	return (current_node);
}
