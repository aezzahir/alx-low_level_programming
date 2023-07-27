#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
int n = 0;
const list_t *tmp;
tmp = h;
while (tmp != NULL)
{
n++;
tmp = tmp->next;
}
return (n);
}
