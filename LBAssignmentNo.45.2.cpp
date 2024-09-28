//write a generic program to accept N values and count frequency of any specific value.
/*
input : 10 20 30 10 30 40 10 40 10
value to check frequency : 10
output : 4
*/

#include <iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T value)
{
    int count = 0;
    for (int i = 0; i < iSize; ++i) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int valueToCheck = 10;
    int frequency = Frequency(arr, 9, valueToCheck);
    cout << frequency << endl;
    return 0;
}
