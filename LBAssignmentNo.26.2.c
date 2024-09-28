//write a program which accept string from user and convert it into upper case

#include <stdio.h>

void struprx(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; 
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
