//write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits)

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT firstNibble = iNo & 0xF;

    UINT lastNibble = (iNo >> 28) & 0xF;

    UINT toggledFirstNibble = firstNibble ^ 0xF;
    UINT toggledLastNibble = lastNibble ^ 0xF;

    UINT mask = (0xF << 28) | 0xF;

    UINT clearedNumber = iNo & ~mask;

    UINT result = clearedNumber | (toggledFirstNibble << 28) | toggledLastNibble;

    return result;
}

int main()
{
    UINT iValue = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    UINT result = ToggleBit(iValue);

    printf("Number after toggling first and last nibble: %u\n", result);

    return 0;
}
