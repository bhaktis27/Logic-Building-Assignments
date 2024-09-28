//write a program which accept string from user and count number of words from string

#include <stdio.h>
#include <ctype.h>

int WordCount(char *str)
{
    int iCnt = 0;
    int inWord = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if ((*str != ' ') && (*str != '\t') && (*str != '\n'))
        {
            if (inWord == 0)
            {
                iCnt++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char str[] = "  Hello   World!   This is a test string.  ";
    int count = WordCount(str);
    
    if(count == -1)
    {
        printf("Invalid input string\n");
    }
    else
    {
        printf("Number of words: %d\n", count);
    }

    return 0;
}
