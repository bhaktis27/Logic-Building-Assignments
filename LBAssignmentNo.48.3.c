//write a program which accept matrix and return largest number from both the diagonals


#include<stdio.h>

int MaxDiagonal(int Arr[10][10], int iRow, int iCol) 
{
    int maxDiagonal;

    maxDiagonal = Arr[0][0];

    for (int i = 0; i < iRow; i++) 
    {
        if (Arr[i][i] > maxDiagonal) 
        {
            maxDiagonal = Arr[i][i];
        }
    }

    for (int i = 0; i < iRow; i++) 
    {
        if (Arr[i][iCol - i - 1] > maxDiagonal) 
        {
            maxDiagonal = Arr[i][iCol - i - 1];
        }
    }

    return maxDiagonal;
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

    int result = MaxDiagonal(Arr, iRow, iCol);

    printf("Largest number in both diagonals: %d\n", result);

    return 0;
}
