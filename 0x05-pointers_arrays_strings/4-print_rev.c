#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s : String
 * Return: void.
 */

void print_rev(char *s)
{
int i;
i = _strlen(s) - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
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
