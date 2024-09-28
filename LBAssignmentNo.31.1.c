//write a program which accept string from user and count number of words from string

#include <stdio.h>

int WordCount(char *str)
{
    int iCnt = 0;
    if (str == NULL)
    {
        return -1;
    }
    
    int inWord = 0; 
    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
        {
            inWord = 0; 
        }
        else if (inWord == 0)
        {
            iCnt++;
            inWord = 1;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int count = WordCount(str);
    printf("Number of words: %d\n", count);
    
    return 0;
}
