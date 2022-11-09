// Using STL Array returns the total number of elements in the array.
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr;
    arr[0] = 11;
    arr[1] = 12;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;
    cout<<"Total number of elements is "<<arr.size()<<endl;
    return 0;
}