#include "lists.h"


/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
