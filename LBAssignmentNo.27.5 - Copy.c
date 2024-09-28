//write a program which accept string from user and reverse that string in place

#include <stdio.h>
#include <string.h>

void StrRevX(char *str)
{
    int length = 0;
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;  

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19s", arr);  

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
