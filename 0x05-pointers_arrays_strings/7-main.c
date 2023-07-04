#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    a = 8;
    printf("sizeof a = %ld bytes adress = %p.\n", sizeof(a),&a);
    int* p;
    char c;
    p = &a;
    c = (char*) &a;
    printf("sizeof p = %ld bytes adress = %p.\n", sizeof(*c), *c);
    printf("p=%p\n", p);
    printf("*p=%d\n", *p);

    int** q;
    q = &p;
    printf("q=%p\n", q);
    printf("*q=%p\n", *q);
    printf("**q=%d\n", **q);
    return (0);
}
