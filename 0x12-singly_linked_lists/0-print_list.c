#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: the number of node
*/


size_t print_list (const list_t *h)
{
size_t n;
n = 0;
while (h != NULL)
{
if(h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
n++;
h = h->next;
}
return (n);
}
