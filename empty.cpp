// Using STL to check whether an array is empty or not.
#include <iostream>
#include <array>
using namespace std;

int main()
{
   array<int,5> arr;
   if(arr.empty()){
    cout<<"Array is empty"<<endl;
   }else{
    cout<<"Array is not empty"<<endl;
   }

   return 0;
}