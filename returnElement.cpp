// Returns the element from the given index using the STL array.

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {12, 34, 67, 89, 54};
    int index;
    cout << "Enter a index" << endl;
    cin >> index;
    try
    {
        if (index > arr.size() - 1 || index<0)
        {
            throw "Invalid Index";
        }
        cout << "Element is " << arr[index] << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    return 0;
}