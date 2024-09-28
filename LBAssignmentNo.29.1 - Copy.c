//write a program which accept string from user and copy that characters of that string into another string in reverse order.

#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int len = 0;
    char *start = src;

    while (*start != '\0') {
        len++;
        start++;
    }

    src += (len - 1);

    while (len > 0) {
        *dest = *src;
        dest++;
        src--;
        len--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s\n", brr);

    return 0;
}
