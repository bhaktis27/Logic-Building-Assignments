//write a recursive program which accept number from user and return summation of digits
//input : 879
//output : 24

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
}