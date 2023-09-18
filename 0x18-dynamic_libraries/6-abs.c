#include "main.h"

/**
 * _abs - function that prints the sign of a number.
 * @n: The character to be checked.
 *
 * Return: 1 and prints + if n is greater than zero,
 * 1 and prints + if n is greater than zero,
 * -1 and prints - if n is less than zero
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}

else if (n == 0)
{
return (0);
}

else
{
return (-1 * n);
}
}
