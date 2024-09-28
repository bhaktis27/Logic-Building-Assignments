//write a program which displays all elements which are prime from singly linear linked list

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

BOOL IsPrime(int num) 
{
    if (num <= 1) 
    {
        return FALSE;
    } 
    else if (num <= 3) 
    {
        return TRUE;
    } 
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return FALSE; 
        }
    }

    return TRUE; 
}

void DisplayPrime(PNODE Head) 
{
    while (Head != NULL) 
    {
        if (IsPrime(Head->Data)) 
        {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}
