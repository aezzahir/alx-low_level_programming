#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a listint_t linked list
 * @head: Double pointer to the head of the linked list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Value to be stored in the new node
 * Return: Pointer to the new node, or NULL if the insertion failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *current = *head;
listint_t *new_node;

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
