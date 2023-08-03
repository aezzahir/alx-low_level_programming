#include "main.h"


/**
 * get_bit - a function  that returns the value of a bit at a given index.
 * @n: the number
 * @index: the index
 * Return: int
*/



int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1 << index;
if ((n & mask) == mask)
{
return (1);
}
else
{
return (0);
}
return (-1);
}
