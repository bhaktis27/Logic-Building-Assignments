//Accept number of rows and columns from user and display below pattern
/*
    input : iRow = 6    iCol = 6
    output : * * * * * * 
             *       * *
             *     *   *
             *   *     *
             * *       *
             * * * * * *
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j || j == (iCol - i + 1))
                printf("* ");
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
