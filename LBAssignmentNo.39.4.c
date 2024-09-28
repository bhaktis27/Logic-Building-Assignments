//write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL; 

BOOL ChkBit(UINT iNo, int iPos, int iPos2)
{
    BOOL bitAtPos = (iNo & (1 << (iPos - 1))) != 0;

    BOOL bitAtPos2 = (iNo & (1 << (iPos2 - 1))) != 0;

    return (bitAtPos || bitAtPos2);
}

int main()
{
    UINT iValue = 0;
    int position1, position2;
    BOOL result = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter first position: ");
    scanf("%d", &position1);

    printf("Enter second position: ");
    scanf("%d", &position2);

    result = ChkBit(iValue, position1, position2);

    if (result)
    {
        printf("Bit at position %d or %d is ON.\n", position1, position2);
    }
    else
    {
        printf("Bit at position %d and %d are OFF.\n", position1, position2);
    }

    return 0;
}
