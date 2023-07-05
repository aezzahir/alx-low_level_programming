#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - Recursive helper function to find the square root of n.
 * @n: The number
 * @start: The starting point for searching the square root
 * @end: The ending point for searching the square root
 *
 * Return: The square root of n if found, -1 otherwise.
 */
int find_sqrt(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = (start + end) / 2;

if (mid * mid == n)
    return (mid);
if (mid * mid > n)
    return (find_sqrt(n, start, mid - 1));
return (find_sqrt(n, mid + 1, end));
}

return (-1);
}
