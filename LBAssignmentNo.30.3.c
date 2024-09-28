//write a program which accepts 2 string from user and check whether first N contents of two strings are equal or not

#include <stdio.h>
#include <string.h>

typedef int BOOL; 

BOOL StrNCmpX(char *src, char *dest, int iCnt)
{
    if (strncmp(src, dest, iCnt) == 0)
    {
        return TRUE; 
    }
    else
    {
        return FALSE;; 
    }
}

int main()
{
    BOOL bRet = TRUE;;
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Logic Building";

    bRet = StrNCmpX(arr, brr, 10);

    if (bRet == TRUE)
    {
        printf("Both string are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }

    return 0;
}
