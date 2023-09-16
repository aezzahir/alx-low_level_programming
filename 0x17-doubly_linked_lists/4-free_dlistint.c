#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head of list
 * Return: voidl
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
