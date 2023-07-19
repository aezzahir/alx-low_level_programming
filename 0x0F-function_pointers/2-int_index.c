#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;

if (size < 0)
{
return (-1);
}
if (array && cmp)
{
for (; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
