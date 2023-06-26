#include <stdio.h>
#include "math.h"

/**
 * keygen - generates random valid passwords
 * @p: pointer to buffer
 * @len: length of buffer
 * Return: void
 */
void keygen(char *p, unsigned int len)
{
    unsigned int i, sum, prod, last;

    sum = 0;
    prod = 1;
    srand(time(NULL));
    for (i = 0; i < len - 1; i++)
    {
        p[i] = rand() % 94 + 33;
        sum += p[i];
        prod *= p[i];
    }
    last = 2772 - sum;
    p[i] = last;
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    char p[100];

    if (argc != 2)
    {
        printf("Usage: %s <key>\n", argv[0]);
        return (1);
    }
    keygen(p, latoi(argv[1]));
    printf("%s", p);
    return (0);
}



/**
 * _atoi - Write a function that convert a string to an integer.
 * followed by a new line.
 * @s : destination
 * Return: char.
 */

int latoi(char *s)
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
if (i_ % 2 == 0)
{
num = num * 10 + (*(s + i) -48);
}
else
{
num = num * 10 - (*(s + i) -48);
}
j = i;
}
if (j != 0 && j != i)
{
break;
}
i++;
}


return (num);
}
