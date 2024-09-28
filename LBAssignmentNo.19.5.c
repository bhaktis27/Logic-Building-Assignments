//Accept N number from user and display all such elements which are multiples of 11.

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;

    printf("Numbers which are multiples of 11 are:\n");
    for(i = 0; i < iLength; i++)
    {
        if (Arr[i] % 11 == 0)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int *p = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter the number of elements that you want: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}
