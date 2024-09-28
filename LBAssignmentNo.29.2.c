//write a program which accept string from user and copy that characters of that string into another string by removing all white spaces

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{

    while (*src != '\0')
    {
        
        if (*src != ' ')
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
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s\n", brr);

    return 0;
}
