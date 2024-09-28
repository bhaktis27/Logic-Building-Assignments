//Accpet number of rows and number of columns from user and display below pattern
//input : iRow = 3   iCol = 5
//output : 5 4 3 2 1
//         5 4 3 2 1
//         5 4 3 2 1

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    for(i = 0; i < iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
