//write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;  

    iNo = iNo ^ iMask;  

    return iNo;  
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is: %u\n", iRet);

    return 0;
}
