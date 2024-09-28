//write a program which accept string from user and toggle the case

#include <stdio.h>

void strtogglex(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;  
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;  
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
