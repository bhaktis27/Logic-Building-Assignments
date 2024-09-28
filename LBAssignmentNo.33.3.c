//write a recursive program which display below pattern
//output : 5 4 3 2 1

#include<stdio.h>

void Display()
{
    int i = 0;
    for(i = 5; i >= 1; i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    Display();

    return 0;
}