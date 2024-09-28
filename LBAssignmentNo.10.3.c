//write a program which accept number from user and count frequency of 2 in it

#include<stdio.h>

int CountTwo(int iNo)
{
    int count = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        int digit = iNo % 10; 
        if (digit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2: %d\n", iRet);

    return 0;
}
