//write application which accept file name from user and one string from user. Write that string at the end of file.
/*
input : Demo.txt
        Hello World
output : Write Hello World at the end of Demo.txt file
*/

#include <stdio.h>

int main() 
{
    char filename[100];
    char inputString[1000];
    FILE *file;

    printf("Enter the file name: ");
    scanf("%s", filename);

    getchar();

    printf("Enter the string to write to the file: ");
    fgets(inputString, sizeof(inputString), stdin);

    file = fopen(filename, "a");

    if (file == NULL) 
    {
        printf("Error: Could not open file %s\n", filename);
        return 1; 
    }

    fprintf(file, "%s", inputString);

    fclose(file);

    printf("Write \"%s\" at the end of %s file\n", inputString, filename);

    return 0;
}
