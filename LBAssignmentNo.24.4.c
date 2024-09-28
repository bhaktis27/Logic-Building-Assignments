//Accept character from user and check whether it is special symbol or not

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z') && ch != ' ' && ch != '\t' && ch != '\n' && ch != '\v' && ch != '\f' && ch != '\r')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }
    return 0;
}
