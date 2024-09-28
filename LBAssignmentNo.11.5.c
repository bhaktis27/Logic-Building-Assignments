//write a program which accept number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int sumEven = 0; 
    int sumOdd = 0;  

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        int digit = iNo % 10; 
        if (digit % 2 == 0)
        {
            sumEven += digit; 
        }
        else
        {
            sumOdd += digit;  
        }
        iNo /= 10; 
    }

    int diff = sumEven - sumOdd;
    return diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
