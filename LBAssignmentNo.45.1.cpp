// write generic program which accept one value and one number from user. Print that value that number of times on screen.
/*
Input : M 7
output : M M M M M M M 
*/

#include <iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}

