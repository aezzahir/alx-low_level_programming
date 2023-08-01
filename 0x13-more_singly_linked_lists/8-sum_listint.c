#include "lists.h"

/**
 * sum_listint - sum of list
 * @head: Double pointer to the head of the linked list
 * Return: The data (n) of the deleted head node, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
