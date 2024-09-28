//write a program which accept string from user and return length of largest word

#include <stdio.h>

int LargestWordLength(char *str)
{
    int iMax = 0; 
    int currentLength = 0; 

    if (str == NULL)
    {
        return -1; 
    }

    while (*str != '\0')
    {
        while (*str == ' ' && *str != '\0')
        {
            str++;
        }

        currentLength = 0;
        while (*str != ' ' && *str != '\0')
        {
            currentLength++;
            str++;
        }

        if (currentLength > iMax)
        {
            iMax = currentLength;
        }
    }

    return iMax;
}

int main()
{
    char str[] = "  Hello   World!   This is a test string.  ";
    int length = LargestWordLength(str);

    if (length == -1)
    {
        printf("Invalid input string\n");
    }
    else
    {
        printf("Length of the largest word: %d\n", length);
    }

    return 0;
}
