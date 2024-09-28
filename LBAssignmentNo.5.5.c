// write a program which accept N and print first 5 multiples of N. 

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i;
    printf("First 5 multiples of %d: ", iNo);
    for(i = 1; i <= 5; i++)
    {
        printf("%d ", iNo * i);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}


