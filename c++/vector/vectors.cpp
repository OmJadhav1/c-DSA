#include <iostream>
//import vector
#include<vector>
using namespace std;
int main() {
 
    //creating vector
    vector<int> arr={1,2,3,4,5};

    //printing all elements
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    //size of vector (no.of elements)
    cout<<arr.size()<<endl;

    //capacity of vector
    cout<<arr.capacity()<<endl;

    //initalisation of vector by fill constructor
    vector<int> arr1(10,5);

    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";

    }
    
    //pop back (delete last element)
    arr.pop_back();

    //push back (adding element at last)
    arr.push_back(22);

     return 0;
}