//write a program which accept one number from user and off 7th bit of that number it it is on. Return modified number

#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;  
    
    if ((iNo & iMask) != 0)  
    {
        iNo = iNo ^ iMask;   
    }
    
    return iNo;  
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number is: %u\n", iRet);

    return 0;
}
