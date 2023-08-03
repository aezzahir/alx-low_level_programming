#include "main.h"


/**
 * get_bit - a function  that returns the value of a bit at a given index.
 * @n: the number
 * @index: the index
 * Return: int
*/



int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1 << index;

if ((n & mask) == mask)
{
return (1);
}
else if ((n & mask) != mask)
{
return (0);
}
else
{
return (-1);
}
}
