//write a program which accept number from user and return the count of even digits

#include<stdio.h>

int CountEven(int iNo)
{
    int count = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        int digit = iNo % 10; 
        if (digit % 2 == 0)
        {
            count++; 
        }
        iNo /= 10; 
    }

    return count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits: %d\n", iRet);

    return 0;
}
