#include "main.h"


/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the index
 * Return: 1 if it works -1 if not
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

mask = 1 << index;
if ((mask & *n) == 0)
{
return (1);
}
else
{
*n = *n & ~mask;
return (1);
}
return (-1);
}
