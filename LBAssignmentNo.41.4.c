//write a program which returns largest  element from singly linear linked list

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node {
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no) {
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->Data = no;

    if (*Head == NULL) {
        *Head = newn;
    } else {
        newn->next = *Head;
        *Head = newn;
    }
}

int Maximum(PNODE Head) 
{
    if (Head == NULL) 
    {
        return -1; 
    }
    int max = Head->Data;
    Head = Head->next;
    while (Head != NULL) 
    {
        if (Head->Data > max) 
        {
            max = Head->Data;
        }
        Head = Head->next;
    }
    return max;
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int largest = Maximum(First);
    if (largest != -1) 
    {
        printf("Largest element in the list is: %d\n", largest);
    } 
    else 
    {
        printf("The list is empty.\n");
    }

    return 0;
}
