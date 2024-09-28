//write a program which accept string from user and convert it into lower case.

#include <stdio.h>

void strlwrx(char *str)
{
    while (*str != '\0') 
    {
        if (*str >= 'A' && *str <= 'Z') 
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}
