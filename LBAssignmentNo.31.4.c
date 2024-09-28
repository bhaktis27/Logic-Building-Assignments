//write a program which accept string from user and copy the contents into another string by removing extra spaces.

#include <stdio.h>

void StrCpyX(const char *src, char *dest)
{
    int i = 0;

    int lastWasSpace = 1; 

    while (*src)
    {
        if (*src != ' ')
        {
            dest[i++] = *src;
            lastWasSpace = 0; 
        }
        else
        {
            if (!lastWasSpace)
            {
                dest[i++] = ' '; 
                lastWasSpace = 1; 
            }
        }

        src++; 
    }
    dest[i] = '\0';
}

int main()
{
    char arr[30] = " Marvellous  multi   OS  ";
    char brr[30];

    StrCpyX(arr, brr);

    printf("String after removing extra spaces: %s\n", brr);

    return 0;
}
