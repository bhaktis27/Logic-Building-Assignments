//Accept N numbers from user and display summation of digits of each number

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    printf("Sum of digits of each number:\n");
    for (int i = 0; i < iLength; i++)
    {
        int num = Arr[i];
        int sum = 0;
        while (num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }
        printf("Sum of digits of %d: %d\n", Arr[i], sum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
