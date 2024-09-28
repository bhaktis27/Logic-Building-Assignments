//wrute a recursive program which accept number from user and return smallest digit

#include <stdio.h>

int MinDigit(int iNo)
{
    if (iNo < 10)
    {
        return iNo;
    }

    int lastDigit = iNo % 10;

    int smallestInRest = MinDigit(iNo / 10);

    if (lastDigit < smallestInRest)
    {
        return lastDigit;
    }
    else
    {
        return smallestInRest;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = MinDigit(iValue);

    printf("Smallest digit: %d\n", iRet);

    return 0;
}
