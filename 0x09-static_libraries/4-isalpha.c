#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
/* 97 = a, 122 = z, 65 = A, 90 = Z */
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

