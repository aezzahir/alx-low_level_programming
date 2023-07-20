#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the separtion
 * @n: number of elements
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

i = 0;


for (; i < n; i++)
{
int x = va_arg(args, int);
printf("%d", x);
if (separator != NULL && i < n - 1)
{
printf("%c", *separator);
}
}
printf("\n");
va_end(args);
}
