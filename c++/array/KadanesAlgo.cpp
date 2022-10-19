#include <iostream>
using namespace std;

int Algo(int arr[], int n){

    int ls=0;
    int cs=0;

    for(int i=0; i<n; i++){
        cs=cs+arr[i];
        if(cs < 0){
            cs=0;
        }
        else if(cs>ls){
            ls=cs;
        }
    }
    return ls;
}

int main() {
 
    int arr[]= {-1,4,9,-2,7,-8,12};
    int n= sizeof(arr)/sizeof(int);


    int sum=Algo(arr,n);
    
    cout<<sum<<endl;

     return 0;
}