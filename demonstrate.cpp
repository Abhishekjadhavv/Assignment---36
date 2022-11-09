// C++ STL program to demonstrate example of array::rbegin() and array::rend()
// functions

#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int ,5> arr ={12,34,56,77,88};

    cout<<"Last element is "<<*(arr.rbegin())<<endl;
    cout << "The array elements in reverse order are "<<endl;
    for(auto it = arr.rbegin();it!=arr.rend();it++){
     cout<<*it<<" ";
    }
    return 0;
}

