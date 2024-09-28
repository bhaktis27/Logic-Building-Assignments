//write a program which accept number from user and display below pattern
//INPUT : 5
//Output : * * * * * # # # # #

#include <stdio.h>

void Display(int iNo)
{
    int i;
    // Display stars
    for (i = 0; i < iNo; i++)
    {
        printf("* ");
    }
    // Display hashes
    for (i = 0; i < iNo; i++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
