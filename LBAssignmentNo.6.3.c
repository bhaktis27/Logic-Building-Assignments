//write a program to find factorial of given number

#include <stdio.h>

int Factorial(int iNo)
{
    if (iNo == 0 || iNo == 1)
    {
        return 1; // Factorial of 0 and 1 is 1
    }
    else
    {
        int fact = 1;
        for (int i = 2; i <= iNo; i++)
        {
            fact *= i;
        }
        return fact;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d\n", iValue, iRet);

    return 0;
}
