#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer that points to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
char *dup_str = strdup(str);
list_t *new_node;
new_node = (list_t *) malloc(sizeof(list_t));

if (str == NULL)
{
return (NULL);
}

if (new_node == NULL)
{
return (NULL);
}
if (dup_str == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = dup_str;
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
