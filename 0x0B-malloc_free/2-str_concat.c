#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenate two string.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the result
*/

char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i;
char *ptr;

if (s1 != NULL)
{
while (s1[len1])
{
len1++;
}
}

if (s2 != NULL)
{
while (s2[len2])
{
len2++;
}
}

ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}

for (i = 0; i < len2; i++)
{
ptr[i + len1] = s2[i];
}
ptr[len1 + len2] = '\0';

return (ptr);
}
