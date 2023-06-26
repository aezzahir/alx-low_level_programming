#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * followed by a new line.
 * @s : destination
 * Return: char.
 */

int _atoi(char *s)
{
int i, i_, num, j;
i = 0;
i_ = 0;
num = 0;
j = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == '-' && j == 0)
{
i_++;
}
if (*(s + i) >= 48 &&  *(s + i) <= 57)
{
num = num * 10 + (*(s + i) -48);
j = 1;
}
i++;
}

if (i_ % 2 != 0)
{
num = -num;
}

return (num);
}
