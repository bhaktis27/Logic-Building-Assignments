// write a program which accept number from user and return summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int sum = 0;
    
    for(int i = 1; i <= iNo; i++)
    {
        int isFactor = 0;
        
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isFactor = 1;
                break;
            }
        }
        
        if(!isFactor && i != 1)
            sum += i;
    }
    
    return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Sum of non-factor numbers up to %d: %d\n", iValue, iRet);

    return 0;
}
