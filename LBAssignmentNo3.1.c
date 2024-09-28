//write a program which accept one number from user and print that number of even numbers on screen

#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }

    for(int i = 2; i <= iNo; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}
