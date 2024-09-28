//write a program which accept number from user and display all its non factors

#include <stdio.h>

void NonFact(int iNo)
{
    printf("Non-factors of %d: ", iNo);
    for (int i = 2; i < iNo; i++) 
    {
        if (iNo % i != 0) 
        {
            printf("%d ", i);
        }
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
