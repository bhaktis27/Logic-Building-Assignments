//write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14 

#include <stdio.h>

double CircleArea(float fRadius)
{
    return 3.14 * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of the circle is %lf", dRet);

    return 0;
}

