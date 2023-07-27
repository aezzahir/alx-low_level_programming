#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
char *str;
int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* _LISTS_H */
