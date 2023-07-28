#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer that points to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup_str = strdup(str);
list_t *new_node = malloc(sizeof(list_t));

if (str == NULL)
{
return (NULL);
}
if (dup_str == NULL)
{
return (NULL);
}
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

new_node->str = dup_str;
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
}
return (*head);
}
