//write a recursive program which display below pattern
//output : 1 2 3 4 5

#include<stdio.h>

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    Display();

    return 0;
}