//write a program which accept matrix from user and display transpose of the matrix

#include <stdio.h>

void Transpose(int Arr[10][10], int iRow, int iCol) 
{
    int Transposed[10][10];

    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            Transposed[j][i] = Arr[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < iCol; i++) 
    {
        for (int j = 0; j < iRow; j++) 
        {
            printf("%d ", Transposed[i][j]);
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

    Transpose(Arr, iRow, iCol);

    return 0;
}
