//Accept number of rows and number of columns from user and display below pattern
/*
    input : iRow = 4    iCol = 4
    output : 1 2 3 4 5
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5      
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (j == 1 || j == iCol || i == 1 || i == iRow || i == j || j == (iCol - i + 1))
                printf("%d ", j);
            else if (j < i && j < (iCol - i + 1))
                printf("%d ", j);
            else if (j > i && j > (iCol - i + 1))
                printf("%d ", j);
            else
                printf("  ");
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
