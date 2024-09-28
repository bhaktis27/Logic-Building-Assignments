//Accept number of rows and number of columns from user and display below pattern
/*
  Input : iRow = 5    iCol = 5
  Output : 1  2  3  4  5
          -1 -2 -3 -4 -5
           1  2  3  4  5
          -1 -2 -3 -4 -5
           1  2  3  4  5
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 0; i < iRow; i++)
    {
        int startNumber = (i % 2 == 0) ? 1 : -1;

        for (int j = 0; j < iCol; j++)
        {
            printf("%d ", startNumber * (j + 1));
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
