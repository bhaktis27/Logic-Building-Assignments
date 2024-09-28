//write a program which accept one number and position from user and off that bit. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT mask = ~(1 << (iPos - 1));

    return iNo & mask;
}

int main()
{
    UINT iValue = 0;
    int position;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter bit position to turn off: ");
    scanf("%d", &position);

    UINT result = OffBit(iValue, position);

    printf("Number after turning off bit at position %d: %u\n", position, result);

    return 0;
}
