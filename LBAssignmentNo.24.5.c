//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

#include <stdio.h>

void Display(char ch)
{
    printf("ASCII value of '%c' in decimal: %d\n", ch, ch);
    printf("ASCII value of '%c' in octal: %o\n", ch, ch);
    printf("ASCII value of '%c' in hexadecimal: %x\n", ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
