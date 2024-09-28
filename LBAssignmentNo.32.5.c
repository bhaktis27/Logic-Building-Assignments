//write a program which accept string from user and replace each occurrence of first character of each word into capital case
/*
input : "marvellous infosystems by piyush khairnar"
output : "Marvellous Infosystems By Piyush Khairnar"
*/

#include <stdio.h>
#include <ctype.h>

void StrCap(char *str)
{
    int capNext = 1; 

    while (*str != '\0')
    {
        if (capNext && isalpha(*str))
        {
            *str = toupper(*str);
            capNext = 0;
        }
        else if (*str == ' ')
        {
            capNext = 1;
        }

        str++;
    }
}

int main()
{
    char arr[50] = "marvellous infosystems by piyush khairnar";

    StrCap(arr);

    printf("%s\n", arr);

    return 0;
}
