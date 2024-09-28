//write a program which checks whether first and last bit is On or Off. First but means bit number 1 and last bit means bit number 32.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1st = 0x1;        
    UINT iMask32nd = 0x80000000; 

    if((iNo & iMask1st) != 0 && (iNo & iMask32nd) != 0)
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
        printf("1st and 32nd bits are On\n");
    }
    else
    {
        printf("Either 1st or 32nd bit is Off (or both are Off)\n");
    }
    
    return 0;
}
