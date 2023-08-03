#include "main.h"


/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: int
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff, mask, num;

diff = (n ^ m);
mask = 1;
num = 0;

while (mask != 0)
{
if ((mask & diff) != 0)
{
num++;
}
mask = mask << 1;
}
return (num);
}
