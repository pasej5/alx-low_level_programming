#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index x.
 * @head: head pointer
 * @index: node to be deleted
 *
 * Return: 1 if succeeded otherewise -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *temp_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	currentNode = *head;
	while (currentNode != NULL && i < index - 1)
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);

	temp_node = currentNode->next;
	currentNode->next = temp_node->next;
	free(temp_node);

	return (1);
}

