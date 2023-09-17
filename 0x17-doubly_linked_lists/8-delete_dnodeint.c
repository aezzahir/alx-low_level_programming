#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index where the new node should be added.
 * Return: 1, or -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	i = 0;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
	{
		(temp->next)->prev = temp->prev;
		(temp->prev)->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
