//write a recursive program which accept number from user and return larget digit

#include <stdio.h>

int LargestDigit(int iNo)
{
    int maxDigit = 0;
    int currentDigit;

    if (iNo < 0)
        iNo = -iNo;

    while (iNo > 0)
    {
        currentDigit = iNo % 10; 

        if (currentDigit > maxDigit)
        {
            maxDigit = currentDigit; 
        }

        iNo = iNo / 10; 
    }

    return maxDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = LargestDigit(iValue);

    printf("Largest digit: %d\n", iRet);

    return 0;
}
