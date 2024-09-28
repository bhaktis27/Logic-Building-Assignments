//write application which accept file name from user and open that file in read mode.
/*
input : Demo.txt
output : File opened successfully
*/

#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("Error: Could not open file %s\n", filename);
    } 
    else
    {
        printf("File opened successfully\n");
        fclose(file);
    }

    return 0;
}
