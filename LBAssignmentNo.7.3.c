//write a program to find even factorial of given number

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int factorial = 1;

    if (iNo % 2 != 0)
        return 0; 

    for (int i = 2; i <= iNo; i += 2)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}
