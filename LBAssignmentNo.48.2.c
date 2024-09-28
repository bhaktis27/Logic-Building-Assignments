//write a program which accept matrix and one number from user and return frequency of that number.

#include<stdio.h>

int CountFrequency(int Arr[10][10], int iRow, int iCol, int iNo) 
{
    int count = 0;
    for (int i = 0; i < iRow; i++) 
    {
        for (int j = 0; j < iCol; j++) 
        {
            if (Arr[i][j] == iNo) 
            {
                count++;
            }
        }
    }
    return count;
}

int main() 
{
    int iRow, iCol, iNo;

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

    printf("Enter the number to search for: ");
    scanf("%d", &iNo);

    int result = CountFrequency(Arr, iRow, iCol, iNo);

    printf("Frequency of %d in the matrix: %d\n", iNo, result);

    return 0;
}
