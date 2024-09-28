//write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>

int CountFour(int iNo)
{
    int count = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        int digit = iNo % 10; 
        if (digit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of 4: %d\n", iRet);

    return 0;
}
