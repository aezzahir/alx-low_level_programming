#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}


/**
 * is_palindrome - Check if it's a palindrome.
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}

/**
 * is_palindrome_helper - Check if it's a palindrome.
 * @s: string
 * @i: int
 * @j: int
 * Return: 0 or 1
 */

int is_palindrome_helper(char *s, int i, int j)
{
if (s[i] != s[j])
{
return (0);
}
if (i >= j)
{
return (1);
}
return (is_palindrome_helper(s, i + 1, j - 1));
}
