#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: head of list
 * @idx: index
 * @n: data to add
 * Return: Adress of the new elment or null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp, *last_node;
	unsigned int i;

	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n)); 
	i = 0;
	new_node->n = n;
	temp = *h;
	while (temp != NULL)
	{
		last_node = temp;
		if (i == idx - 1)
		{
			new_node->prev = last_node;
			new_node->next = last_node->next;
			last_node->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
