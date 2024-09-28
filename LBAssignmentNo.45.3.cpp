//write a generic program to accept N values and search first occurrence of any specific value.
/*
Input : 10 20  30 10  30 40  10 40 10
value to search : 40
output : 6 
*/

#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T value)
{
    for (int i = 0; i < iSize; ++i) 
    {
        if (arr[i] == value) 
        {
            return i; 
        }
    }
    return -1; 
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int valueToSearch = 40;
    int index = SearchFirst(arr, 9, valueToSearch);

    if (index != -1) 
    {
        cout << "First occurrence of " << valueToSearch << " is at index: " << index << endl;
    } 
    else 
    {
        cout << valueToSearch << " not found in the array." << endl;
    }

    return 0;
}
