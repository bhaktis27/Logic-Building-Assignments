//write a program which returns smallest element from singly linear linked list

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

int Minimum(PNODE Head) 
{
    if (Head == NULL) 
    {
        return -1; 
    }
    int min = Head->Data;
    Head = Head->next;
    while (Head != NULL) 
    {
        if (Head->Data < min) 
        {
            min = Head->Data;
        }
        Head = Head->next;
    }
    return min;
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int smallest = Minimum(First);
    if (smallest != -1) 
    {
        printf("Smallest element in the list is: %d\n", smallest);
    } 
    else 
    {
        printf("The list is empty.\n");
    }

    return 0;
}
