//write generic program to accept N values from user and return addition of that values

#include <stdio.h>

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;
    for (int i = 0; i < iSize; ++i)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iSum = AddN(arr, 5);
    printf("Sum of integers: %d\n", iSum);

    float fSum = AddN(brr, 4);
    printf("Sum of floats: %f\n", fSum);

    return 0;
}
