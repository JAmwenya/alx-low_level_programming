#include "lists.h"
/**
 * list_len - number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in a list.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
