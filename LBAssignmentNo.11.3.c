//write a program which accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
{
    int count = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        int digit = iNo % 10; 
        if (digit >= 3 && digit <= 7)
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

    iRet = CountRange(iValue);

    printf("Count of digits between 3 and 7: %d\n", iRet);

    return 0;
}
