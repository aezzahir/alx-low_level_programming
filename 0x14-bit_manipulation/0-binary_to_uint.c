#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: the binary number
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
unsigned int n = 0;
unsigned int i = 0;

if (b == NULL)
{
return (0);
}

while (b[n] != '\0')
{
if (b[n] != '0' && b[n] != '1')
{
return (0);
}
n++;
}

for (; i < n; i++)
{
if (b[i] == '1')
{
num += powerOfTwo(n - i - 1);
}
}
return (num);
}

/**
 * powerOfTwo - power of 2 function
 * @n: power
 * Return: unsigned int
*/
unsigned int powerOfTwo(unsigned int n)
{
unsigned int num = 1;
while (n > 0)
{
num = num * 2;
n--;
}

return (num);
}
