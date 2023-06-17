#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible
 *              combinations of single-digit numbers.
 *              Numbers must be separated by ,, followed by a space
 *
 * Return: Always O (Success)
*/

int main(void)
{
int i;
i = 0;

while (i < 10)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
