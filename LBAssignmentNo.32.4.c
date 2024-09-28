//write a program which accept string from user and copy the contents into another string by removing extra white spaces
/*
Ipput : "Marvel lous multi OS"
output: "Marvellous multi OS"
*/

#include <stdio.h>

void StrCpyX(const char *src, char *dest)
{
    int inWord = 0; 

    while (*src != '\0')
    {
        while (*src == ' ' && inWord == 0)
        {
            src++;
        }

        if (*src != ' ')
        {
            *dest = *src;
            dest++;
            inWord = 1;
        }
        else if (*src == ' ' && inWord == 1)
        {
            *dest = ' ';
            dest++;
            inWord = 0;
        }

        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];
    StrCpyX(arr, brr);

    printf("%s", brr);
    return 0;
}
