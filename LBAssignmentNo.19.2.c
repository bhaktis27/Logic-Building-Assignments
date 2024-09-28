//Accept N numbers from user and display all such elements which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;
    
    printf("number divisible by 5 are : \n");
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 5) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements that you want : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : %d\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    return 0;
}