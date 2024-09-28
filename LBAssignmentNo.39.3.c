//write a program which accept one number from user and check whether 9th or 12th bit is on or off

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL; 

BOOL ChkBit(UINT iNo)
{
    BOOL b9thBit = 0, b12thBit = 0;
    
    UINT mask9th = 0x100;
    UINT mask12th = 0x1000;
    
    if ((iNo & mask9th) != 0)
        b9thBit = 1; 
    
    if ((iNo & mask12th) != 0)
        b12thBit = 1; 
    
    return (b9thBit || b12thBit);
}

int main()
{
    UINT iValue = 0;
    BOOL result = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    result = ChkBit(iValue);

    if (result)
    {
        printf("9th or 12th bit is ON.\n");
    }
    else
    {
        printf("9th and 12th bits are OFF.\n");
    }

    return 0;
}
