//write a program which accept area in square feet and convert it into square meter

#include <stdio.h>

double SquareMeter(int iValue)
{8
    return iValue * 0.092903;
}

int main()
{
    int iValue = 0; 
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters: %.2lf", dRet);

    return 0;
}
