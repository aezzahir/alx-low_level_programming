#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: head of list
 * @n: data to add
 * Return: Adress of the new elment or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp, *last_node;

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
	temp = *head;
	while (temp != NULL)
	{
		last_node = temp;
		temp = temp->next;
	}
	new_node->prev = last_node;
	new_node->next = NULL;
	last_node->next = new_node;
	return (new_node);
}
