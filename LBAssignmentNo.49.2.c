//Write a program which accept matrix and reverse the contents of each row.

#include <stdio.h>

void ReverseRow(int Arr[10][10], int iRow, int iCol) 
{
    for (int i = 0; i < iRow; i++) 
    {
        int start = 0;
        int end = iCol - 1;
        while (start < end) 
        {
            int temp = Arr[i][start];
            Arr[i][start] = Arr[i][end];
            Arr[i][end] = temp;

            start++;
            end--;
        }
    }
}

void PrintMatrix(int Arr[10][10], int iRow, int iCol) 
{
    printf("Matrix after reversing each row:\n");
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

    ReverseRow(Arr, iRow, iCol);

    PrintMatrix(Arr, iRow, iCol);

    return 0;
}
