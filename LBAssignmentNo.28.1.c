//write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)

#include<stdio.h>

void strCpyX(char *src, char *dest)
{
    //filter
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  //empty string

    strCpyX("%s",brr);

    return 0;
}