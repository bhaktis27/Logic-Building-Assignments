//Accept string from user and check whether the string is palindrome or not without considering its case

#include <stdio.h>

typedef int BOOL; 

BOOL StrPalindrome(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        char charStart = str[start];
        char charEnd = str[end];

        if (charStart >= 'A' && charStart <= 'Z')
        {
            charStart += ('a' - 'A');
        }
        if (charEnd >= 'A' && charEnd <= 'Z')
        {
            charEnd += ('a' - 'A');
        }

        if (charStart != charEnd)
        {
            return 0; 
        }
        
        start++;
        end--;
    }

    return 1; 
}

int main()
{
    BOOL bRet;
    char arr[20] = "abccBa";

    bRet = StrPalindrome(arr);

    if (bRet == 1)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}
