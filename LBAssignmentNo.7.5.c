//write a program which returns difference between Even factorial and odd factorial of given number

#include <stdio.h>

int Factorial(int iNo)
{
    int factorial = 1;
    for (int i = 1; i <= iNo; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int FactorialDiff(int iNo)
{
    int evenFactorial = 1, oddFactorial = 1;

    for (int i = 2; i <= iNo; i += 2)
    {
        evenFactorial *= i;
    }

    for (int i = 1; i <= iNo; i += 2)
    {
        oddFactorial *= i;
    }

    return evenFactorial - oddFactorial;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
