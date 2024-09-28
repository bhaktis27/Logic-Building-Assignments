//write a program which display below pattern
//output : a b c d e f

#include<stdio.h>

void Display()
{
    char ch;
    for(ch = 'a'; ch <= 'f'; ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    Display();

    return 0;
}