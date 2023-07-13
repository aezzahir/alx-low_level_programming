#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated of size olde_size
 * @old_size: the old size
 * @new_size: the new size
 * Return: Returns the pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr_char;
char *ptr_new;
unsigned int i;
if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
{
return (ptr);
}
ptr_new = malloc(new_size);
ptr_char = ptr;
if (ptr_new == NULL)
{
return (NULL);
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
{
ptr_new[i] = ptr_char[i];
}
}
else if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
{
ptr_new[i] = ptr_char[i];
}
}
free(ptr);
return (ptr_new);
}
