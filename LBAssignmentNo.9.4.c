//write a program which accept range from user and return addition of all even numbers in between that range

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if (iStart <= 0 || iEnd <= 0 || iStart > iEnd) 
    {
        printf("Invalid range. Both starting and ending points should be positive, and starting point should be less than or equal to the ending point.\n");
        return 0;
    }

    int sum = 0;
    for (int i = iStart; i <= iEnd; i++) 
    {
        if (i % 2 == 0) 
        {
            sum += i;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition of even numbers is %d", iRet);

    return 0;
}
