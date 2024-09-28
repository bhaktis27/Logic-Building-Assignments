//write a program which accept range from user and display all numbers in between that range
//Input : 10 18    Output : 10 11 12 13 14 15 16 17 18 
//input : 90 18    output : Invalid range



#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if (iStart > iEnd) 
    {
        printf("Invalid range. Starting point should be less than or equal to the ending point.\n");
        return;
    }
    for (int i = iStart; i <= iEnd; i++) 
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
