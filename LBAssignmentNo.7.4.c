//write a program to find odd factorial of given number

#include <stdio.h>

int OddFactorial(int iNo)
{
    int factorial = 1;
    for (int i = 1; i <= iNo; i += 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}
