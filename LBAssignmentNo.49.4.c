//write a program which accept matrix and check whether the matrix is identity matrix or not

#include <stdio.h>
#include <stdbool.h>  

bool ChkIdentity(int Arr[10][10], int iRow, int iCol) 
{
    if (iRow != iCol) 
    {
        return false;
    }

    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (i == j) 
            {
                if (Arr[i][j] != 1) 
                {
                    return false;
                }
            } 
            else 
            {
                if (Arr[i][j] != 0) 
                {
                    return false;
                }
            }
        }
    }

    return true;
}

int main() 
{
    int iRow, iCol;

    printf("Enter the number of rows: ");
    scanf("%d", &iRow);
    printf("Enter the number of columns: ");
    scanf("%d", &iCol);

    int Arr[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    bool isIdentity = ChkIdentity(Arr, iRow, iCol);

    if (isIdentity) 
    {
        printf("The matrix is an identity matrix.\n");
    } 
    else 
    {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
