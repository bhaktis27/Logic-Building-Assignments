//write generic program to accept N values and search last occurrence of any specific value
/*
Input : 10 20 30 10 30 40 10 40 10
value to search : 40
output : 8
*/

#include <iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T value)
{
    for (int i = iSize - 1; i >= 0; --i) 
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
    int index = SearchLast(arr, 9, valueToSearch);

    if (index != -1) 
    {
        cout << "Last occurrence of " << valueToSearch << " is at index: " << index << endl;
    } 
    else
    {
        cout << valueToSearch << " not found in the array." << endl;
    }

    return 0;
}

