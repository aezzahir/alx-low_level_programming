#include "lists.h"

/**
 * get_nodeint_at_index - Deletes the head node of a listint_t linked list
 * @head: Double pointer to the head of the linked list
 * Return: The data (n) of the deleted head node, or 0 if the list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

for (; i < index; i++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
