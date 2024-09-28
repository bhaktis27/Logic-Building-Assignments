// write a program which accept number from user and print numbers till that number. 

#include<stdio.h>

void Display(int iNo)
{
    int i;
    for(i = 1; i <= iNo; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

