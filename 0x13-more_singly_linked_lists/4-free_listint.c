#include "lists.h"

/**
 * free_listint - frees memory allocated for a listint_t structure
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
