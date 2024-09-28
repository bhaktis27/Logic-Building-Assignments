//Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding captial. In other cases display as it is.
 
#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Corresponding capital character: %c\n", ch - ('a' - 'A'));
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Corresponding small character: %c\n", ch + ('a' - 'A'));
    }
    else
    {
        printf("Character as it is: %c\n", ch);
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
