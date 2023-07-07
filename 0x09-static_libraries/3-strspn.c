#include "math.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s : String
 * @accept : String
 * Return: int.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k, l;
i = 0;
j = 0;
k = 0;
l = 0;
while (*(s + i) != '\0')
{
j = 0;
k = 0;
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
k = 1;
l++;
}
j++;
}
if (k == 0)
{
break;
}
i++;
}
return (l);
}
