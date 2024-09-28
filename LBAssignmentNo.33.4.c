//write a program which display below pattern
//output : A B C D E F

#include<stdio.h>

void Display()
{
    char ch;
    for(ch = 'A'; ch <= 'F'; ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    Display();

    return 0;
}