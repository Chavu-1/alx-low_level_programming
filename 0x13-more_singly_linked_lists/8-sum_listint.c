#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: head
 * Return: sum of all the data in nodes
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
