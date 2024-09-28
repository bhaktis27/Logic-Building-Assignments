//write a program which checks whether 7th & 15th & 21st, 28th bit is On or Off

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask7th = 0x40;       
    UINT iMask15th = 0x4000;  
    UINT iMask21st = 0x200000;  
    UINT iMask28th = 0x10000000;
    
    if((iNo & iMask7th) != 0 && (iNo & iMask15th) != 0 && (iNo & iMask21st) != 0 && (iNo & iMask28th) != 0)
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
        printf("7th, 15th, 21st, and 28th bits are On\n");
    }
    else
    {
        printf("Either 7th, 15th, 21st, or 28th bit is Off (or more are Off)\n");
    }
    
    return 0;
}
