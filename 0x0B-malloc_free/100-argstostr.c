#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *s;

/* validate input */
if (ac == 0 || av == NULL)
{
return (NULL);
}
/* first, calculate the length of the final string */
i = 0;
len = 0;
for (; i < ac; i++)
{
j = 0;
for (; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
s = malloc(len *sizeof(char) + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
s[k] = av[i][j];
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
