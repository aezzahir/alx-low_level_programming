#include "lists.h"


/**
 * free_listint - prints all the elements of a list_t list
 * @head: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
