//Accept number from user and display below pattern
//Input : 5
//Output : A B C D E 

#include <stdio.h>

void Pattern(int iNo)
{
    for(char ch = 'A'; ch <= iNo; ch++)
    {
        printf("%c ", ch);
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d %ds", &iValue);

    Pattern(iValue);

    return 0;
}
