//write a program which accept string from user and reverse each word in place

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void StrWrdRev(char *str)
{
    int len = strlen(str);

    int start = 0;
    int end = 0;

    while (end <= len)
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            reverseString(str, start, end - 1);
            start = end + 1; 
        }
        end++;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    StrWrdRev(str);

    printf("Reversed words in the string: %s\n", str);

    return 0;
}
