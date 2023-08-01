#include "lists.h"


/**
 * print_listint - prints all the elements of a list_t list
 * @h: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
