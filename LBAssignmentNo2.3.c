//Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 5)
    {
        printf("Hello");
    }
    else
    {
        printf("World");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
