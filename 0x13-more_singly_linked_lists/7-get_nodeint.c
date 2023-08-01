#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to retrieve (starting from 0)
 * Return: Pointer to the node at the given index, or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = head;

while (current != NULL && i < index)
{
current = current->next;
i++;
}

return (current);
}
