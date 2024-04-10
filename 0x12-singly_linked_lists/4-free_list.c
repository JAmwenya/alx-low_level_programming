#include "lists.h"
/**
 * free_list - frees memory of all lists.
 * @head: head pointer
 * Return: Always success.
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node;
		free(current_node->str);
		free(current_node);
		current_node = next_node->next;
	}
}
