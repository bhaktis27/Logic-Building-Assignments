//write a program which accept string from user and copy capital characters of that string into another string

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    //filter
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}