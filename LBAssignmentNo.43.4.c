//write a program which display smallest digits of all elements from singly linear linked list(Don't consider 0)

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

    if (newn == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int SmallestDigit(int num) 
{
    int smallest = 9; 
    while (num != 0) 
    {
        int digit = num % 10;
        if (digit < smallest && digit != 0) 
        {
            smallest = digit;
        }
        num /= 10;
    }
    return smallest;
}

void DisplaySmallestDigit(PNODE Head) 
{
    while (Head != NULL) 
    {
        int smallest = SmallestDigit(Head->Data);
        printf("%d ", smallest);
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 250);
    InsertFirst(&First, 532);
    InsertFirst(&First, 415);

    DisplaySmallestDigit(First);

    return 0;
}
