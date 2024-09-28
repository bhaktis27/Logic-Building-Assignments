//consider below code snippet to solve given problem statements

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

int SearchFirstOcc(PNODE Head, int no) 
{
    int position = 1;
    while (Head != NULL) 
    {
        if (Head->Data == no) 
        {
            return position;
        }
        Head = Head->next;
        position++;
    }
    return -1; 
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int element = 30;
    int position = SearchFirstOcc(First, element);

    if (position != -1) 
    {
        printf("Element %d found at position %d\n", element, position);
    } 
    else 
    {
        printf("Element %d not found in the list\n", element);
    }

    return 0;
}



