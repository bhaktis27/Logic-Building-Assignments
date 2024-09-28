//write a recursive program which display below pattern
//output : * * * * *

#include<stdio.h>

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("*\t");
    }
}
int main()
{
    Display();

    return 0;
}