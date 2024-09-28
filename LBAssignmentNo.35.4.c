//write a recursive program which accept number from user and return its factorial.
//input : 4
//output : 120

#include<stdio.h>

int Fact(int iNo)
{
   int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factor are : %d",iRet);

    return 0;
}