#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *              followed by a new line.
 *
 * Return: Always O (Success)
*/

int main(void)
{
int i;
i = 0;

while (i < 10)
{
printf("%d", i);
i++;
}
putchar('\n');
return (0);
}
