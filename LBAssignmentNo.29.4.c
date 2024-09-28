//write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + ('a' - 'A');
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

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}
