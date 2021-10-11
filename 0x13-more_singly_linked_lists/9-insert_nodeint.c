#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: head
 * @idx: index
 * @n: data for new node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *move = *head;
	unsigned int i = 0;

	if (*head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (move)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = move->next;
			move->next = new;
			return (new);
		}
		move = move->next;
		i++;
	}
	free(new);
	return (NULL);
}
