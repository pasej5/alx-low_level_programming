#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adding a new node at the beggining of the list
 * @head: this points to the pointer to the head of the list
 * @n: value of the new node from user
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
