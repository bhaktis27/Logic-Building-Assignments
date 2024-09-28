//Accept number from user and display below pattern
//input : 5
//output : 5 # 4 # 3 # 2 # 1 #

#include <stdio.h>

void Pattern(int iNo)
{
    for (int i = iNo; i > 0; i--)
    {
        printf("%d ", i);

        if (i > 1)
            printf("# ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d %d", &iValue);

    Pattern(iValue);

    return 0;
}

