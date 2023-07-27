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
const list_t *tmp;
size_t n;
n = 0;
tmp = h;

while (tmp != NULL)
{
if(tmp->str == NULL)
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
