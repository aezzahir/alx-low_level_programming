#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the given
 * index in a listint_t linked list
 * @head: Double pointer to the head of the linked list
 * @index: Index of the node to be deleted (starting from 0)
 * Return: 1 if the deletion succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *current, *temp;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
while (current != NULL && i < index - 1)
{
current = current->next;
i++;
}

if (current == NULL || current->next == NULL)
{
return (-1);
}
temp = current->next;
current->next = current->next->next;
free(temp);
return (1);
}
