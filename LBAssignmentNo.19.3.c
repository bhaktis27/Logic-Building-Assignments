// Accept N numbers from user and display all such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;

    printf("Numbers which are even and divisible by 5 are : \n");
    for(i = 0; i < iLength; i++)
    {
        if(((Arr[i] % 2) == 0) || ((Arr[i] % 5) == 0))
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *p = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter the number of elements that you want : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }

    printf("Enter %d elements : ",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}