#include "lists.h"

/**
 * pop_listint - deletes head node and returns its data
 * @head: head
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
