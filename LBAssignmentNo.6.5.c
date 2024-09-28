//write a program to find even factorial of given number

#include <stdio.h>

int EvenFactorial(int iNo)
{
    //logic
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}
