//write a program which accept string from user and accept one character. Return index of last occurrence of that character

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int index = -1;  
    int currentIndex = 0;  
    
    while (*str != '\0')  
    {
        if (*str == ch) 
        {
            index = currentIndex;  
        }
        str++;  
        currentIndex++;  
    }
    return index;  
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19s", arr);  

    printf("Enter the character: ");
    scanf(" %c", &cValue); 

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
