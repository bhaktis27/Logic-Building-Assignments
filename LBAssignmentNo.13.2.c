//Accept number of rows and number of columns from user and display below pattern
//input : iRow = 4   iCol = 3
//output : 1 2 3
//         1 2 3
//         1 2 3 

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    for(i = 0; i < iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
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
