//write a program which returns addition of all even element from singly linear linked list

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no) 
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    if (newn == NULL) 
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int AdditionEven(PNODE Head) 
{
    int sum = 0;

    while (Head != NULL) 
    {
        if (Head->Data % 2 == 0) 
        { 
            sum = sum + Head->Data;
        }
        Head = Head->Next;
    }

    return sum;
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    int result = AdditionEven(First);
    printf("Sum of all even elements: %d\n", result);

    return 0;
}
