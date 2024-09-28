//write application which accept file name from user and display size of file
/*
input : Demo.txt
output : File size is 56 bytes
*/

#include <stdio.h>

int main() 
{
    char filename[100];
    FILE *file;
    long filesize;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "rb");

    if (file == NULL) 
    {
        printf("Error: Could not open file %s\n", filename);
        return 1; 
    }

    fseek(file, 0, SEEK_END);

    filesize = ftell(file);

    fclose(file);

    printf("File size is %ld bytes\n", filesize);

    return 0;
}
