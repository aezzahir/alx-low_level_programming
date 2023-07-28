#include "lists.h"


/**
 * free_list - prints all the elements of a list_t list
 * @head: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
