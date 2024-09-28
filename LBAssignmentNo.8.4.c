//write a program which accpet temperature in Fahrenheit and convert it into celcius

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5 / 9;
}

int main()
{
    float fValue = 0.0; 
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %.2lf", dRet);

    return 0;
}
