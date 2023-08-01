#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void Insert_nth(int data, int n);
void Insert(int x);
void Print();
typedef struct Node
{
int data;
struct Node *next;
}
Node;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
Node *head;
int main(void)
{

head = NULL;
printf("How many numbers ? \n");
int n, i, x, nth, data;
scanf("%d", &n);
for (i = 0; i < n ; i++)
{
printf("Enter the number : \n");
scanf("%d", &x);
Insert(x);
Print();
}
printf("n-th position ? \n");
scanf("%d", &nth);
printf("Data ? \n");
scanf("%d", &data);
Insert_nth(data,nth);
Print();
}

void Insert(int x)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    Node *nextNode = head;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        while (nextNode)
        {
            if( nextNode->next == NULL)
            {
                nextNode->next = temp;
                return;
            }
            nextNode = nextNode->next;
        }

    }


}

void Print()
{
    Node *temp = head;
    printf("List : ");
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
printf("\n");
}
void Insert_nth(int data, int n)
{
    Node *temp1 = (Node*)malloc(sizeof(Node));
    temp1->data = data;
    temp1->next = NULL;

    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
    }
    Node* temp2 = head;

    for(int i = 0; i < n-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

