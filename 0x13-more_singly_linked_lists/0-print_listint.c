#include "lists.h"


/**
 * print_listint - prints all the elements of a list_t list
 * @h: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

print_listint(const listint_t *h)
{
int i = 0;
const listint_t *tmp;
tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
i++;
tmp = tmp->next;
}
return (i);
}
