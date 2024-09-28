//write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters

#include <stdio.h>

int Difference(char *str)
{
    int smallCount = 0;
    int capitalCount = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            smallCount++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            capitalCount++;
        }
        str++;
    }
    return smallCount - capitalCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference between frequency of small and capital characters: %d\n", iRet);

    return 0;
}
