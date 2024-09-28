//write a program which accept matrix and display addition of elements from each column

#include <stdio.h>

void AddColumn(int Arr[10][10], int iRow, int iCol) 
{
    for (int j = 0; j < iCol; j++) 
    {
        int columnSum = 0;
        for (int i = 0; i < iRow; i++) 
        {
            columnSum += Arr[i][j];
        }
        printf("Sum of elements in column %d: %d\n", j, columnSum);
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

    AddColumn(Arr, iRow, iCol);

    return 0;
}
