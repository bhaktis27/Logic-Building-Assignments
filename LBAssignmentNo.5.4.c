// write a program which accept N from user and print all odd numbers up to N. 

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i;
    printf("Odd numbers up to %d: ", iNo);
    for(i = 1; i <= iNo; i += 2) 
    {
        printf("%d ", i);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
