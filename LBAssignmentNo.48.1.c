//write a program which accept matrix from user and return addition of diagonal elements
#include<stdio.h>

int AddDiagonal(int Arr[10][10], int iRow, int iCol) 
{
    int sum = 0;
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (i == j || i + j == iRow - 1) 
            {
                sum += Arr[i][j];
            }
        }
    }
    return sum;
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

    int result = AddDiagonal(Arr, iRow, iCol);

    printf("Sum of diagonal elements: %d\n", result);

    return 0;
}
