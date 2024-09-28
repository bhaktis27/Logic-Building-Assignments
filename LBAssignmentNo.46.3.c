// write application which accept file name from user and read all data from that file and display contents on screes
/*
input : Demo.txt
output : Display all data of file
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char filename[100];
    FILE *file;
    char ch;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1; 
    }

    printf("Contents of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
