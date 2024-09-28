//Accept number from user and display below pattern
//Input : 8
//output : 2 4 6 8 10 12 14 16

#include <stdio.h>

void Pattern(int iNo)
{
    int endValue = iNo * 2;
    
    for (int i = 2; i <= endValue; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);
    
    Pattern(iValue);

    return 0;
}
