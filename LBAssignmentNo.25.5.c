//write a program which accept string from user and display it in reverse order.

#include <stdio.h>

void Reverse(char *str)
{
    int length = 0;
    int i;

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}
