//write a generic program to find largest number from three numbers

#include<stdio.h>

template <class T>
T FindLargest(T a, T b, T c)
{
    T largest = a;
    if(b > largest)
    {
        largest = b;
    }
    if(c > largest)
    {
        largest = c;
    }
    return largest;
}
int main()
{
    int iRet = FindLargest(10, 20 ,30);
    printf("%d\n",iRet);

    float fRet = FindLargest(10.5f, 20.3f, 15.8f);
    printf("%f\n",fRet);

    double dRet = FindLargest(5.7, 10.9, 8.1);
    printf("%d\n",dRet);
}