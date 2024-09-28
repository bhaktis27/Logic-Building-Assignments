//write a recursive program which display below pattern
//input : 6
//output : A B C D E F

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    char ch = 'A';
    
    for(i = 1; i <= iNo; i++, ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}