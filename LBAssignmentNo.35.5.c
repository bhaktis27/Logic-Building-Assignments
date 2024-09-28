//write a program which accept number from user and return its product of digits.

#include<stdio.h>

int iMult(int iNo)
{
    int iCount = 1;
    int iDigit = 0;
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iCount = iDigit * iCount;
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = iMult(iValue);

    printf("%d",iRet);

    return 0;
}