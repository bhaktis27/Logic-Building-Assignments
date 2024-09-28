//write a program which display product of all digits of all elements from singly linear linked list(Don't consider 0)

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

void DisplayProduct(PNODE Head) 
{
    while (Head != NULL) 
    {
        int num = Head->Data;
        int product = 1;

        while (num != 0) 
        {
            int digit = num % 10;
            if (digit != 0) 
            {
                product = product * digit;
            }
            num /= 10;
        }

        printf("%d ", product);
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    DisplayProduct(First);

    return 0;
}
