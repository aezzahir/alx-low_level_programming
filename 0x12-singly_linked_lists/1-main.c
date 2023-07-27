#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

typedef struct Node
{
int data;
struct Node *next;
}
Node;

Node *A;
A = NULL;

Node *nextNode, *secondNode;

nextNode = (Node*) malloc(sizeof(Node));
secondNode = (Node*) malloc(sizeof(Node));

A = nextNode;
printf("Adress of A = %p\n",&A);
printf("A = %p\n", A);
printf("Data of A : %d\n", (*A).data);
printf("Adress of A : %p\n", (*A).next);
nextNode->data = 2;
nextNode->next = secondNode;
secondNode->data = 3;
secondNode->next = NULL;


Node *temp;

temp = A;
int i;
i = 0;
while (temp != NULL)
{
    printf("Node (%d) Adress : %p\n", i, &((*temp).data));
    printf("Node (%d) Adress : %p\n", i, &temp);
    printf("Node (%d) data : %d\n", i, (*temp).data);
    printf("Node (%d) next Node : %p\n", i, (*temp).next);
    temp = temp->next;
    i++;
}

}
