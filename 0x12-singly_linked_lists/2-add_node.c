#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds new node at the beginning
 * @head: points to the the headof the list
 * @str: string to be copied
 *
 * Return: return the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node;

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

	new_node->next = *head;
	*head = new_node;
	new_node->len = length;

	return (new_node);
}
