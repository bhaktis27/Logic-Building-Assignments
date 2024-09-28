//write a program which accept one number and position from user and on that bit. Return modified number

#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT mask = 1 << (iPos - 1);

    return iNo | mask;
}

int main()
{
    UINT iValue = 0;
    int position;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter bit position to turn on: ");
    scanf("%d", &position);

    UINT result = OnBit(iValue, position);

    printf("Number after turning on bit at position %d: %u\n", position, result);

    return 0;
}
