#include "main.h"
#include <stdio.h>
/**
 * rev_string -  prints a string, in reverse, followed by a new line.
 * @s : String
 * Return: void.
 */

void rev_string(char *s)
{
int n, i;
char rev[100];

n = _strlen(s) - 1;
i = 0;
while (n >= 0)
{
rev[i] = *(s + n);
i++;
n--;
}
i = 0;
while (*(rev + i) != '\0')
{
s[i] = rev[i];
i++;
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
