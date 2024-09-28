//write application which accept file name from user and create that file.
/*
input : Demo : text
output : File created successfully
*/

#include <stdio.h>

int main() 
{
    char filename[100];
    FILE *file;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error: Could not create file %s\n", filename);
    } 
    else 
    {
        printf("File created successfully\n");
        fclose(file);
    }

    return 0;
}
