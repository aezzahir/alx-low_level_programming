#include "lists.h"

/**
 * dlistint_len - a function that prints
 * all the elements of a dlistint_t list.
 * @h: head of list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int	i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

