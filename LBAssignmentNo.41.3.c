//write a program which returns addition of all element from singly linear linked list

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no) 
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->Data = no;

    if (*Head == NULL) 
    {
        *Head = newn;
    } 
    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Addition(PNODE Head) 
{
    int sum = 0;
    while (Head != NULL)
    {
        sum = sum + Head->Data; 
        Head = Head->next;
    }
    return sum;
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int total = Addition(First);
    printf("Sum of all elements: %d\n", total);

    return 0;
}
