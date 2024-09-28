//write a program which accept distance on kilometre and convert it into meter. 

#include <stdio.h>

int KMtoMeter(int iKilometers)
{
    return iKilometers * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometers: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters: %d", iRet);

    return 0;
}
