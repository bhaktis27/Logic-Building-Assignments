//write a program which returns second maximum element from singly linear linked list

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

int SecMaximum(PNODE Head) 
{
    int max1 = -2147483648; 
    int max2 = -2147483648; 

    while (Head != NULL) 
    {
        if (Head->Data > max1) 
        {
            max2 = max1;
            max1 = Head->Data;
        }
        else if (Head->Data > max2 && Head->Data != max1) 
        {
            max2 = Head->Data;
        }
        Head = Head->Next;
    }

    return max2;
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    int result = SecMaximum(First);
    printf("Second maximum element: %d\n", result);

    return 0;
}
