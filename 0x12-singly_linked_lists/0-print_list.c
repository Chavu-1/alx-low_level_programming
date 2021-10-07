#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	}
	return (i);
}
