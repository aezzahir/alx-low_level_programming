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
if (tmp->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", tmp->len, tmp->str);
}
n++;
tmp = tmp->next;
}
return (n);
}
