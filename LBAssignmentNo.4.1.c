//write a program which accept number from user and display its multiplication of factors

#include <stdio.h>

int MultFact(int iNo) {
    int product = 1;
    
    if (iNo < 0)
        iNo = -iNo;

    for (int i = 1; i <= iNo; i++) {
        if (iNo % i == 0) {
            product *= i;
        }
    }

    return product;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Product of factors: %d", iRet);

    return 0;
}