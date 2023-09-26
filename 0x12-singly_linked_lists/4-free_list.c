#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return value.
 */

void free_list(list_t *head)
{
	list_t *cuurent_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(cuurent_node->str);
		free(current_node);
	}
}

