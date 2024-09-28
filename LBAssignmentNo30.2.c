//write a program which 2 strings from user and check whether contents of two strings are equal or not 

#include <stdio.h>

typedef int BOOL; 

BOOL StrCmpX(char *src, char *dest)
{
    while (*src != '\0' && *dest != '\0')
    {
        if (*src != *dest)
        {
            return 0; 
        }
        src++;
        dest++;
    }

    if (*src == '\0' && *dest == '\0')
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
    BOOL bRet;
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Infosystems";

    bRet = StrCmpX(arr, brr);

    if (bRet == 1)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }

    return 0;
}
