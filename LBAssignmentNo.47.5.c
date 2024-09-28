//write a program which accepts file name and one count from user and read that number of characters from starting position
/*
input : Demo.txt
output : Display first 12 characters from starting position
*/

#include <stdio.h>
#include <stdlib.h>

void DisplayFirstCharacters(char FName[], int count)
{
    FILE *fp = NULL;
    char ch;
    int charCount = 0;

    fp = fopen(FName, "r");
    if (fp == NULL)
    {
        printf("Unable to open file %s\n", FName);
        return;
    }

    while ((ch = fgetc(fp)) != EOF && charCount < count)
    {
        printf("%c", ch);
        charCount++;
    }

    fclose(fp);
}

int main()
{
    char FileName[30];
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter number of characters to display: ");
    scanf("%d", &count);

    if (count > 0)
    {
        printf("Display first %d characters from starting position:\n", count);
        DisplayFirstCharacters(FileName, count);
        printf("\n");
    }
    else
    {
        printf("Invalid count. Please enter a positive number.\n");
    }

    return 0;
}
