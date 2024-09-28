//write a program which display largest digits of all elements from singly linear linked list

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

int LargestDigit(int num) 
{
    int largest = 0; 
    while (num != 0) 
    {
        int digit = num % 10;
        if (digit > largest) 
        {
            largest = digit;
        }
        num /= 10;
    }
    return largest;
}

void DisplayLargestDigit(PNODE Head) 
{
    while (Head != NULL) 
    {
        int largest = LargestDigit(Head->Data);
        printf("%d ", largest);
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

    DisplayLargestDigit(First);

    return 0;
}
