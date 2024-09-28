// write a program which accept number from user and print that number of $ and * on screen

#include<stdio.h>

void Pattern(int iNo)
{
    int i;
    for(i = 0; i < iNo; i++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
