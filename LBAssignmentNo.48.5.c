//write a program which accept matrix and swap the contents of consecutive rows

#include <stdio.h>

void SwapRows(int Arr[10][10], int iRow, int iCol) 
{
    for (int i = 0; i < iRow - 1; i += 2) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            int temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp;
        }
    }
}

void PrintMatrix(int Arr[10][10], int iRow, int iCol) 
{
    printf("Matrix after swapping rows:\n");
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
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

    SwapRows(Arr, iRow, iCol);

    PrintMatrix(Arr, iRow, iCol);

    return 0;
}
