#include "stdlib.h"

/**
 * _strstr - locates a substring.
 * @haystack : String
 * @needle : String
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *hay, *nee;

while (*haystack != '\0')
{
hay = haystack;
nee = needle;
while (*nee != '\0' && *haystack == *nee)
{
haystack++;
nee++;
}
if (!*nee)
{
return (hay);
}
haystack++;
}
return (NULL);
}
