//write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is on return TRUE otherwise return FALSE

#include <stdio.h>

typedef unsigned int UINT;
typedef enum { FALSE = 0, TRUE } BOOL; 

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT mask = 1 << (iPos - 1);

    if (iNo & mask)
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    } 
}

int main()
{
    UINT iValue = 0;
    int position;
    BOOL result = FALSE; 

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter bit position: ");
    scanf("%d", &position);

    result = ChkBit(iValue, position);

    if (result)
    {
        printf("Bit at position %d is ON.\n", position);
    }
    else
    {
        printf("Bit at position %d is OFF.\n", position);
    }

    return 0;
}
