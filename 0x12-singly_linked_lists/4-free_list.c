#include "lists.h"

/**
 * free_list - frees list_t
 * @head: first node
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder->str);
		free(holder);
	}
}
