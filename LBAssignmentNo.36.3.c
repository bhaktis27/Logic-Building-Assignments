//write a recursive program which accept string from user and count number of small characters


#include<stdio.h>

int Small(char *str)
{
    if (*str == '\0')
        return 0;

    int iCount = 0;

    if ((*str >= 'a') && (*str <= 'z'))
    {
        iCount = 1;
    }

    return iCount + Small(str + 1);
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string: ");

    scanf("%[^\n]s", Arr);

    iRet = Small(Arr);

    printf("Number of small characters are: %d\n", iRet);

    return 0;
}








