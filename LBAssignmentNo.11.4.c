//write a program which accept number from user and return multiplication of all digits

#include<stdio.h>

int MultDigits(int iNo)
{
    int mult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        int digit = iNo % 10; 
        mult *= digit; 
        iNo /= 10; 
    }

    return mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits: %d\n", iRet);

    return 0;
}

