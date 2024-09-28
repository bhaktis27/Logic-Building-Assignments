//write a program which accept string from user and reverse each word in place
/*
input : "Marvellous Multi OS"
output : "suollevraM itluM SO"
*/

#include <stdio.h>
#include <string.h>

void Reverse(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void StrWrdRev(char *str)
{
    if (str == NULL)
    {
        return;
    }

    char *wordStart = NULL;
    char *temp = str; 

    while (*temp != '\0')
    {
        if (wordStart == NULL && (*temp != ' ' && *temp != '\t' && *temp != '\n'))
        {
            wordStart = temp;
        }

        if (wordStart && (*(temp + 1) == ' ' || *(temp + 1) == '\t' || *(temp + 1) == '\n' || *(temp + 1) == '\0'))
        {
            Reverse(wordStart, temp);
            wordStart = NULL; 
        }

        temp++;
    }
}

int main()
{
    char str[] = "Marvellous Multi OS";
    printf("Original string: %s\n", str);

    StrWrdRev(str);

    printf("Reversed words: %s\n", str);

    return 0;
}
