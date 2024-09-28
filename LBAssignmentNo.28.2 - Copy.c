//write a program which accept a string from user and copy the contents of that string into another string (Implement strncpy() function)

#include<stdio.h>

void StrNCpyX(char *src, char *dest)
{
    int iCnt = 0;
    //filter
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    StrNCpyX(arr,brr);
    printf("%s",brr);
    return 0;
}