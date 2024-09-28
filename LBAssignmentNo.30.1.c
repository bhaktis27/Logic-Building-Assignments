//write a program which accepts 2 strings from user and concat N characters of second string after first string. Value of N should be accepted from user.(Implement strcat() function). 
//Note : If third parameter is greater than the size of second string then concat whole string after first string

//Input : "Marvellous Infosystems"
//          "Logic Building"
//               5

//output :   "Marvellous Infosystems Logic"

#include <stdio.h>

void StrNCatX(char *dest, char *src, int iCnt)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while ((*src != '\0') && (iCnt > 0))
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    int N;

    printf("Enter the number of characters to concatenate: ");
    scanf("%d", &N);

    StrNCatX(arr, brr, N);

    printf("Resulting string: %s\n", arr);

    return 0;
}
