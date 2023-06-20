#include "main.h"

/**
 * jack_bauer - Write a function that prints the last digit of a number.
 *
 * Return: void
 */

void jack_bauer(void)
{
int i, j, r1, r2;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar('0');
_putchar('0' + i);
_putchar(':');
if (j < 10)
{
_putchar('0');
_putchar('0' + j);
_putchar('\n');
}
else
{
r1 = j % 10;
r2 = (j - r1) / 10;
_putchar('0' + r2);
_putchar('0' + r1);
_putchar('\n');
}
}
else
{
r1 = i % 10;
r2 = (i - r1) / 10;
_putchar('0' + r2);
_putchar('0' + r1);
_putchar(':');
if (j < 10)
{
_putchar('0');
_putchar('0' + j);
_putchar('\n');
}
else
{
r1 = j % 10;
r2 = (j - r1) / 10;
_putchar('0' + r2);
_putchar('0' + r1);
_putchar('\n');
}
}
}
}
}
