#include <stdio.h>
#include "lists.h"

/**
 * listint_len - this function returns the number of elements in listint_t
 * @h: this the header pointer to this list
 *
 * Return: total number of the elemnents in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temporary_pointer_to_head = h;

	while (temporary_pointer_to_head != NULL)
	{
		count++;
		temporary_pointer_to_head = temporary_pointer_to_head->next;
	}
	return (count);

}
