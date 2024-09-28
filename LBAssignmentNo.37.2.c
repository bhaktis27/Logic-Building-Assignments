//write a program which checks whether 5th & 18th bit is On or Off

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask5th = 0x10;       
    UINT iMask18th = 0x20000;   
    
    if((iNo & iMask5th) != 0 && (iNo & iMask18th) != 0)
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
        printf("Both 5th and 18th bits are On\n");
    }
    else
    {
        printf("Either 5th or 18th bit is Off (or both are Off)\n");
    }
    
    return 0;
}
