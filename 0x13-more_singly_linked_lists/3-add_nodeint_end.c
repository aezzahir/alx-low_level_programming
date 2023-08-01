#include "lists.h"

/**
 * add_nodeint_end - a function to add a node at the end
 * @head: pointer to the head of the list
 * @n: data to be added to the new node
 * Return: returns the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end = (listint_t *)malloc(sizeof(listint_t));
listint_t *tmp;

if (end == NULL)
{
return (NULL);
}

end->next = NULL;
end->n = n;

if (*head == NULL)
{
*head = end;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = end;
}
return (end);
}
