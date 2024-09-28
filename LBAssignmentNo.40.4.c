//write a program which accept one number and position from user and toggle that bit. Return modified number

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT mask = 1 << (iPos - 1);

    return iNo ^ mask;
}

int main()
{
    UINT iValue = 0;
    int position;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter bit position to toggle: ");
    scanf("%d", &position);

    UINT result = ToggleBit(iValue, position);

    printf("Number after toggling bit at position %d: %u\n", position, result);

    return 0;
}
