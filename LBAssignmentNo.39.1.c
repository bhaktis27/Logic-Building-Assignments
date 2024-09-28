//write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator

#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;
    
    while (iNo != 0)
    {
        if ((iNo & 1) == 1) 
        {
            iCount++; 
        }
        iNo = iNo >> 1; 
    }
    
    return iCount; 
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = CountOne(iValue);

    printf("Number of 1 bits is: %d\n", iRet);

    return 0;
}

