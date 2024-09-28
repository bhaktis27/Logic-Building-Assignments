//write a program which accept string from user and replace each occurrence of first character of each word into capital case.

#include <stdio.h>

void StrCap(char *str)
{
    int isFirstChar = 1;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
        {
            isFirstChar = 1; 
        }
        else if (isFirstChar && *str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; 
            isFirstChar = 0; 
        }
        else
        {
            isFirstChar = 0; 
        }

        str++;
    }
}

int main()
{
    char arr[50] = "marvellous infosystems by Piyush khairnar";

    StrCap(arr);

    printf("%s", arr);

    return 0;
}
