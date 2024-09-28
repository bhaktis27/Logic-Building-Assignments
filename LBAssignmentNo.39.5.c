//write a program which accept one number from user and range of positions from user. Toggle all bits from that range

//Input : 897   9   13
//Toggle all bits from position 9 to 13 of input number i.e 879

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT mask = ((1 << (iEnd - iStart + 1)) - 1) << (iStart - 1);

    return iNo ^ mask;
}

int main()
{
    UINT iValue = 0;
    int start, end;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter starting position: ");
    scanf("%d", &start);

    printf("Enter ending position: ");
    scanf("%d", &end);

    UINT result = ToggleBitRange(iValue, start, end);

    printf("Number after toggling bits from position %d to %d: %u\n", start, end, result);

    return 0;
}
