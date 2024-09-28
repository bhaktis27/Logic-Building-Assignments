//write a program which accept matrix and check whether the matrix is sparse matrix or not
//sparse matrix is a matrix with the majority of its elements equal to zero

#include <stdio.h>
#include <stdbool.h>  

bool ChkSparse(int Arr[10][10], int iRow, int iCol) 
{
    int totalElements = iRow * iCol;
    int zeroCount = 0;

    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (Arr[i][j] == 0) 
            {
                zeroCount++;
            }
        }
    }

    return zeroCount > (totalElements / 2);
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

    bool isSparse = ChkSparse(Arr, iRow, iCol);

    if (isSparse) 
    {
        printf("The matrix is a sparse matrix.\n");
    } else 
    {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
