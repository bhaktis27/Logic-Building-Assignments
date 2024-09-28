//write a program which accepts file name and one character from user and count number of occurrences of that characters from that file
/*
input : Demo.txt
output : Frequency of M is 7
*/

#include <stdio.h>
#include <stdlib.h>

int CountCharacter(char FName[], char targetChar)
{
    FILE *fp = NULL;
    char ch;
    int count = 0;

    fp = fopen(FName, "r");
    if (fp == NULL)
    {
        printf("Unable to open file %s\n", FName);
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == targetChar)
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
    char targetChar;
    int countOccurrences = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter character to count: ");
    scanf(" %c", &targetChar); 

    countOccurrences = CountCharacter(FileName, targetChar);

    if (countOccurrences != -1)
    {
        printf("Frequency of %c is %d\n", targetChar, countOccurrences);
    }

    return 0;
}
