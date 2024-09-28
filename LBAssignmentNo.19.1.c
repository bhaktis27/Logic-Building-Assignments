//Accept N numbers from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Differnce(int Arr[], int iLenght)
{
    int EvenSum = 0;
    int OddSum = 0, i = 0;

    for(i = 0; i < iLenght; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            EvenSum = EvenSum + Arr[i];
        }
        else 
        {
            OddSum = OddSum + Arr[i];
        }
        return EvenSum - OddSum;
    }

}
int main()
{
    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0;

    printf("Enter the elements that you want : ");
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
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Differnce(p,iSize);

    printf("Result is : %d\n",iRet);

    free(p);

    return 0;
}
