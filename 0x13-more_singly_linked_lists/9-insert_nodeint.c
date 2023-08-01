#include "lists.h"

/**
 * insert_nodeint_at_index - sum of list
 * @head: Double pointer to the head of the linked list
 * Return: The data (n) of the deleted head node, or 0 if the list is empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp1 = (Node*)malloc(sizeof(listint_t ));
temp1->data = n;
temp1->next = NULL;

if (idx == 1)
{
temp1->next = *head;
*head = temp1;
}
listint_t* temp2 = *head;

for(int i = 0; i < idx-2; i++)
{
temp2 = temp2->next;
}
temp1->next = temp2->next;
temp2->next = temp1;
}
