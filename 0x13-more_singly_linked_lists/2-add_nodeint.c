#include "lists.h"


/**
 * add_nodeint - a function add node
 * at the beginening
 * @head: the head
 * @n: data
 * Return: returns the number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *begin = (listint_t*) malloc(sizeof(listint_t));
if (begin == NULL)
{
    return (NULL);
}
begin->next = *head;
begin->n = n;
*head = begin;
return (begin);
}
