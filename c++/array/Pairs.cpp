#include <iostream>
using namespace std;
//for all pairs this function = 25 pairs
/*void pairs(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }

}*/

//for requied pairs =15 pairs 
//put conditon for j =i+1
void pairs1(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
    
}

int main() {
    
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);

    //pairs(arr, n);
    pairs1(arr, n);


     return 0;
}