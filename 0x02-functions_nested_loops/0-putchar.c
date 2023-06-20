#include "main.h"

/**
 * main - Entry point
 *
 * Description: Write a program that prints _putchar,
 *             followed by a new line.
 *
 *
 * Return: Always O (Success)
*/

int main(void)
{
char  chaine[10] = "_putchar";

int i;
i = 0;

while (chaine[i] != '\0')
{
_putchar(chaine[i]);
i++;
}
_putchar('\n');
return (0);
}


