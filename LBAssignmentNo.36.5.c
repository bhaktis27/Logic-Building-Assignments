//write a recursive program which accept number from user and return its reverse number

#include <stdio.h>

int Reverse(int iNo, int reversedNumber)
{
    if (iNo == 0)
        return reversedNumber;

    int lastDigit = iNo % 10;

    reversedNumber = reversedNumber * 10 + lastDigit;

    return Reverse(iNo / 10, reversedNumber);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue, 0);

    printf("Reversed number: %d\n", iRet);

    return 0;
}
