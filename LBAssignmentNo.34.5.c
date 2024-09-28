//write a recursive program which display below pattern
//input : 6
//output : a b c d e f

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    char ch = 'a';
    
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