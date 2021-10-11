#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head
 * @index: index
 * Return: 1 if succeeded, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *delete;
	unsigned int i = 0;

	current = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head
 * @index: index
 * Return: 1 if succeeded, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *delete;
	unsigned int i = 0;

	current = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		while (i < index - 1)
		{
			current = current->next;
			if (current == NULL)
				return (-1);
			i++;
		}
		delete = current;
		delete = delete->next;
		current->next = delete->next;
		free(delete);
	}
	return (1);
}		*head = (*head)->next;
		free(current);
	}
	else
	{
		while (i < index - 1)
		{
			current = current->next;
			if (current == NULL)
				return (-1);
			i++;
		}
		delete = current;
		delete = delete->next;
		current->next = delete->next;
		free(delete);
	}
	return (1);
}
