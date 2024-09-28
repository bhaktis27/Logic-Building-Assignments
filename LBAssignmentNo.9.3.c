//write a program which accept range from user and return addition of all numbers in between that range.(Range should contains positive numbers only)

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    if (iStart <= 0 || iEnd <= 0 || iStart > iEnd) 
    {
        printf("Invalid range. Both starting and ending points should be positive, and starting point should be less than or equal to the ending point.\n");
        return 0;
    }

    int sum = 0;
    for (int i = iStart; i <= iEnd; i++) 
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return 0;
}
