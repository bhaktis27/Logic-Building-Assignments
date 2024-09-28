//write a program which displays addition of digits of element from singly linear linked list

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

int SumDigit(int num) 
{
    int sum = 0;
    while (num != 0) 
    {
        sum = sum + num % 10; 
        num /= 10;       
    }
    return sum;
}

void DisplaySumDigit(PNODE Head) 
{
    while (Head != NULL) 
    {
        int sum = SumDigit(Head->Data);
        printf("%d ", sum);
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);

    DisplaySumDigit(First);

    return 0;
}
