//write a program which 2 strings from user and concat second string after first string.

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    // Traverse the first string till the end
    while(*src != '\0')
    {
        src++;
    }

    // Copy contents of the second string to the end of the first string
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = " logic building"; 

    StrCatX(arr, brr);

    printf("%s\n", arr);

    return 0;
}
