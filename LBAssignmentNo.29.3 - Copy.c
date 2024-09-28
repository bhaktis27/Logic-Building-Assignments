//write a program which accept string from user and copy that characters of that string into another by string by converting all small characters into capital case

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{

    while (*src != '\0')
    {

        if (*src >= 'a' && *src <= 'z')
        {
            *dest = *src - ('a' - 'A');
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr, brr);

    printf("%s\n", brr);

    return 0;
}
