//write a program which accept number from user and display its table

#include <stdio.h>

void Table(int iNo)
{
    printf("Table of %d:\n", iNo);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", iNo, i, iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
