//write a program which accept range from user and display all numbers in between that range in reverse order

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd) 
    {
        printf("Invalid range. Starting point should be less than or equal to the ending point.\n");
        return;
    }
    for (int i = iEnd; i >= iStart; i--) 
    {
        printf("%d ", i);
    }
    printf("\n"); 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
