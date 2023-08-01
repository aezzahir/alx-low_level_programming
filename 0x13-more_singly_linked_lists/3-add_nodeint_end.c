#include "lists.h"


/**
 * add_nodeint_end - a function add node
 * at the end
 * @head: the head
 * @n: data
 * Return: returns the number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end = (listint_t *) malloc(sizeof(listint_t));
listint_t *next = *head;
if (begin == NULL)
{
return (NULL);
}
while (next != NULL)
{
    next = next->next;
}
next->next = end;
end->next = null;
end->n = n;
return (end);
}
