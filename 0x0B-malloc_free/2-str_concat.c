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
int len1, len2, i;

char *ptr;

len1 = 0;

while (s1[len1])
{
len1++;
}

len2 = 0;

while (s2[len2])
{
len2++;
}
ptr = (char *)malloc((len1 + len2) *sizeof(char));

if (ptr == NULL)
{
return (ptr);
}

i = 0;
while (i < (len1 + len2))
{
if (i < len1)
{
ptr[i] = s1[i];
}

if (i >= len1)
{
ptr[i] = s2[i - len1];
}
i++;
}
return (ptr);

}
