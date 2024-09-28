//write a program which checks whether 7th & 8th & 9th bit is On or Off

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask7th = 0x40;  
    UINT iMask8th = 0x80;  
    UINT iMask9th = 0x100; 

    UINT iCombinedMask = iMask7th | iMask8th | iMask9th; 

    if((iNo & iCombinedMask) == iCombinedMask)
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
    BOOL bRet = FALSE;
    
    printf("Enter a number: ");
    scanf("%u", &iValue);
    
    bRet = ChkBit(iValue);
    
    if(bRet == TRUE)
    {
        printf("7th, 8th, and 9th bits are On\n");
    }
    else
    {
        printf("Either 7th, 8th, or 9th bit is Off (or more are Off)\n");
    }
    
    return 0;
}
