#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: the array
 * @size:  is the size of the array
 * @action:  is a pointer to the function you need to use
 * Return: void
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
unsigned long i;
i = 0;

for (; i < size; i++)
{
action(*(array + i));
}
}
}
