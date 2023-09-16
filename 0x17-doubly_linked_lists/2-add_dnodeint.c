#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: head of list
 * @n: data to add
 * Return: Adress of the new elment or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (*head);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
