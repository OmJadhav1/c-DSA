#include <iostream>
using namespace std;

//Lower bound of a given integer means integer which is just smaller than given integer.
int Lower(int arr[], int n, int val){

int ans=0;

for(int i=0; i<n; i++){
    if(arr[i] <= val){
        if(arr[i]>=ans){
            ans=arr[i];
        }
        
    }
    else{
            return -1;
        }
}

return ans;

}
int main() {
 
    int arr[]={4,5,6,9};
    int n = sizeof(arr)/sizeof(int);

    int val;
    cout<<"enter no. for lower bound calclation"<<endl;
    cin>>val;

    int lb=Lower(arr, n, val);
    cout<<lb<<endl;

     return 0;
}