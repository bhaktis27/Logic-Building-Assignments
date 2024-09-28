//Accept number from user and display below pattern
//Input : 4
//Output : # 1 * # 2 * # 3 * # 4 *

#include <stdio.h>

void Pattern(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        if (i % 2 != 0)
            printf("# ");
        printf("%d", i);
        
        if (i < iNo)
            printf(" * ");
        else
            printf(" ");
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
