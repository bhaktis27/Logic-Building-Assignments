//write a program which accept matrix and reverse the contents of each column

#include <stdio.h>

void ReverseCol(int Arr[10][10], int iRow, int iCol) 
{
    for (int j = 0; j < iCol; j++) 
    {
        int start = 0;
        int end = iRow - 1;
        while (start < end) 
        {
            int temp = Arr[start][j];
            Arr[start][j] = Arr[end][j];
            Arr[end][j] = temp;

            start++;
            end--;
        }
    }
}

void PrintMatrix(int Arr[10][10], int iRow, int iCol) 
{
    printf("Matrix after reversing each column:\n");
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

    ReverseCol(Arr, iRow, iCol);

    PrintMatrix(Arr, iRow, iCol);

    return 0;
}
