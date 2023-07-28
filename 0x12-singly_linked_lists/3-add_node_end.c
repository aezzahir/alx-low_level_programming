#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to return the length of
 * Return: returns the length of the string
 */

int strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head node
 * @str: value of string of node to be added
 * Return: returns the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
int length = _strlen(str);
list_t *new_node = (list_t *)malloc(sizeof(list_t));
if (str == NULL)
{
return (NULL);
}
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = length;
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
return (new_node);
}
