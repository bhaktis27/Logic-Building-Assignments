//Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then printf all the characters in reverse order till a. In ither cases return directly.

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        for (char c = ch; c <= 'Z'; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (char c = ch; c >= 'a'; c--)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
