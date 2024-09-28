//write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and octal representation of every member from 0 to 255.

#include <stdio.h>

void DisplayASCII()
{
    printf("-----------------------------------------------------------\n");
    printf("|  Symbol  |  Decimal  |  Hexadecimal  |  Octal  |\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i <= 255; i++)
    {
        printf("|   %3c    |   %3d     |     0x%02X      |   %03o   |\n", i, i, i, i);
    }

    printf("-----------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}
