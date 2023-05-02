#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adding the node at the and of the listint_t list
 * @head: head pointer of the list
 * @n: new integer to be stored in the new node
 * Return: Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tail_node;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tail_node = *head;
		while (tail_node->next != NULL)
		{
			tail_node = tail_node->next;
		}
		tail_node->next = newNode;
	}
	return (newNode);
}
