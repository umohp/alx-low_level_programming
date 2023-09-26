#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
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

