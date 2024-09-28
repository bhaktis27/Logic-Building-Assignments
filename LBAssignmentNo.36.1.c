//write a program which accept string from user and count white spaces
//Input : HE llo WOr ID
//output : 3

#include<stdio.h>

int WhitSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(str == " ")
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^\n]s",&Arr);

    iRet = WhitSpace(Arr);
}