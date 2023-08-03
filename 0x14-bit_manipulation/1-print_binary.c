#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
unsigned int start_num = 0;

mask = mask << (sizeof(unsigned long int) * 8 - 1);

if (n == 0)
{
_putchar('0');
}

while (mask != 0)
{

if (mask & n)
{
_putchar('1');
start_num = 1;
}

else
{
if (start_num)
{
_putchar('0');
}
}
mask = mask >> 1;
}
}
