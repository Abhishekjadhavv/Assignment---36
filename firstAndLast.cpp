// Find the first and last element using the STL array.
#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr = {11,23,65,78,65};
    cout<<"First element is "<<arr.front()<<endl;
    cout<<"Last element is "<<arr.back()<<endl;
    return 0;
}