//write a program which reverse each element from singly linear linked list

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

void Reverse(int *num) 
{
    int reversed = 0;
    while (*num != 0) 
    {
        int remainder = *num % 10;
        reversed = reversed * 10 + remainder;
        *num /= 10;
    }
    *num = reversed;
}

void ReverseLinkedList(PNODE Head) 
{
    while (Head != NULL) 
    {
        Reverse(&(Head->Data));
        Head = Head->Next;
    }
}

void DisplayLinkedList(PNODE Head) 
{
    while (Head != NULL) 
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    ReverseLinkedList(First);

    DisplayLinkedList(First);

    return 0;
}


