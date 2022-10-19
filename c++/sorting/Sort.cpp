#include <iostream>
//inbuilt sort contain in algorithm library
#include <algorithm>
using namespace std;

//by this we can determine ascending or desending order.
bool compare(int a, int b){
    return a>b;//desending
}
int main() {

    int arr[]={10,2,5,66,12,58,70};
    int n= sizeof(arr)/sizeof(int);

    //inbuilt sort
    // we can use comparators
    sort(arr, arr+n, compare );
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    // their is also one more function like comparator
    //sort(arr, arr+n, greater<int>())
     return 0;
}