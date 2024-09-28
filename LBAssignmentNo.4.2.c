//write a program which accept number from user and display its factors in decreasing order

#include <stdio.h>

void FactRev(int iNo)
{
    printf("Factors of %d in reverse order: ", iNo);

    for (int i = iNo; i > 0; i--) 
    {
        if (iNo % i == 0)
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

    FactRev(iValue);

    return 0;    
}
