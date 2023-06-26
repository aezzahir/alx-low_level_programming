#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : String
 * Return: void.
 */

void puts_half(char *str)
{
int n;
n = _strlen(str);
if (n % 2 == 0)
{
n = n / 2;
}
else
{
n = (n / 2) + 1;
}
while (*(str + n) != '\0')
{
_putchar(*(str + n));
n++;
}
_putchar('\n');
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
