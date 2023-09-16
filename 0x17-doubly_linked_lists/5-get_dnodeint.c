#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns
 * the nth node of a dlistint_t linked list
 * @head: head of list
 * @n: data to add
 * Return: Adress of the new elment or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
