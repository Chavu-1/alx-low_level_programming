#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		printf("%i\n", h->n);
	}
	return (i);
}
