//write a program which accept string from user and count number of white spaces

#include <stdio.h>

int CountWhite(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            count++;
        }
        str++;
    } 
    return count;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n", iRet);

    return 0;
}
