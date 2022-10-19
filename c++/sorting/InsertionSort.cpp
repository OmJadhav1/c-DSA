#include <iostream>
using namespace std;

void insertion(int arr[], int n){

    for(int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j] > current && j>=0){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
int main() {
 
    int arr[]= {-2,5,8,-4,6,1,7};
    int n= sizeof(arr)/sizeof(int);

    insertion(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}