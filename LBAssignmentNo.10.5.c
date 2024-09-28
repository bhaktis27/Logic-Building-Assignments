//write a program which accept number from user and count frequency of such a digits which are less than 6

#include <stdio.h>

int CountDigitsLessThanSix(int iNo)
{
    int count = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        int digit = iNo % 10; 
        if (digit < 6)
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

    iRet = CountDigitsLessThanSix(iValue);

    printf("Frequency of digits less than 6: %d\n", iRet);

    return 0;
}
