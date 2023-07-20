#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: the count of numbers
 * Return: int If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list args;
va_start(args, n);

sum = 0;

i = 0;

if (n == 0)
{
va_end(args);
return (0);
}


for (; i < n; i++)
{
int x = va_arg(args, int);
sum += x;
}
va_end(args);

return (sum);
}
