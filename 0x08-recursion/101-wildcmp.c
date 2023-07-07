#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard *
 * @s1: First string
 * @s2: Second string with wildcard *
 * Return: 1 if strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* If s2 has a wildcard *, recursively check for matches */
if (*s2 == '*')
{
/* If s1 is empty and s2 has only */
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
/* If the characters match or s2 has a '?', move to the next characters */
if (*s1 == *s2 || *s2 == '?')
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
