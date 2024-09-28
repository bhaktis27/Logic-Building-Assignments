//write a program which accept file name from user and count number of capital characters from that file.
/*
input : Demo.txt
output : Number of capital characters are 23
*/

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char FName[])
{
    FILE *fp = NULL;
    char ch;
    int count = 0;

    fp = fopen(FName, "r");
    if(fp == NULL)
    {
        printf("Unable to open file %s\n", FName);
        return -1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    if(iRet != -1)
    {
        printf("Number of capital characters are %d\n", iRet);
    }

    return 0;
}
