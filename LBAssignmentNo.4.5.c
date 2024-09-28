//write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int evenProduct = 1;
    int oddProduct = 1;
    
    for(int i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            if(i % 2 == 0)
                evenProduct *= i;
            else
                oddProduct *= i;
        }
    }
    return evenProduct - oddProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
