//write generic program to accept N values and reverse the contents
/*
Input : 10 20 30 10 30 40 10 40 10
output : 10 40 10 40 30 10 30 20 10
*/

#include <iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    for (int i = 0; i < iSize / 2; ++i) 
    {
        T temp = arr[i];
        arr[i] = arr[iSize - 1 - i];
        arr[iSize - 1 - i] = temp;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    cout << "Original array: ";
    for (int i = 0; i < 9; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Reverse(arr, 9);

    cout << "Reversed array: ";
    for (int i = 0; i < 9; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
