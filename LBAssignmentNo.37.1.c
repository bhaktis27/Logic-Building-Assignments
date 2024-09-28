//write a program which checks whether 15th bit is On or Off

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x4000; 
    
    if((iNo & iMask) != 0)
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
        printf("15th bit is On\n");
    }
    else
    {
        printf("15th bit is Off\n");
    }
    
    return 0;
}
