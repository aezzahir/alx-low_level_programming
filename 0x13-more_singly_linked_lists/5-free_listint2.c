#include "lists.h"

/**
 * free_listint2 - frees all the elements of a listint_t list and sets head to NULL
 * @head: pointer to the pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
listint_t *current;
listint_t *next;

if (head == NULL || *head == NULL)
{
return;
}
current = *head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

*head = NULL;
}
