//write a program which accept string from user and return length of largest word

#include<stdio.h>

int WordCount(char *str)
{
    int iMax = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while(*str == ' ')
            {
                str++;
            }
        }
        else
        {
            int len = 0;
            while(*str != ' ' && *str != '\0')
            {
                len++;
                str++;
            }
            if(len > iMax)
            {
                iMax = len;
            }
        }
    }
    return iMax;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int maxLength = WordCount(str);
    printf("Length of the largest word: %d\n", maxLength);

    return 0;
}
