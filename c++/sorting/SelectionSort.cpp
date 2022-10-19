#include <iostream>
using namespace std;

void selection(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }            
        }
        swap(arr[min],arr[i]);
    }
}
int main() {
 
    int arr[]={2,1,5,3,8,9};
    int n = sizeof(arr)/sizeof(int);

    selection(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}