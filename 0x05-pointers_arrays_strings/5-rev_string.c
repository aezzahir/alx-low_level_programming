#include "main.h"
#include <stdio.h>
/**
 * rev_string -  prints a string, in reverse, followed by a new line.
 * @s : String
 * Return: void.
 */

void rev_string(char *s)
{
int i;
int j;
char c;
i = 0;
j = _strlen(s) - 1;
while (i < j)
{
c = *(s + i);
*(s + i) = *(s + j);
*(s + j) = c;
i++;
j--;
}
}

/**
 * _strlen -  returns the length of a string.
 * @s : String
 * Return: int.
 */

int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}

