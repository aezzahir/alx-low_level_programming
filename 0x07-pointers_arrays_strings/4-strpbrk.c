#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : String
 * @accept : String
 * Return: char.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j, k;
i = 0;
j = 0;
k = 0;
while (*(s + i) != '\0')
{
j = 0;
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
k = 1;
break;
}
j++;
}
if (k == 1)
{
break;
}
i++;
}
if (k == 1)
{
return (s + i);
}
else
{
return (NULL);
}
}
