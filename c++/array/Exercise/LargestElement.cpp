#include <iostream>
using namespace std;

int Largest(int arr[], int n){

    int  le=0;
    for(int i=0; i<n; i++){
        int x= arr[i];
        if(x> le){
            le=x;
        }

    }
return le;
}
int main() {
 
    int a;
    cin>>a;
    int arr[a]={0};
    int n =sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int la=Largest(arr,n );
    cout<<la<<endl;


     return 0;
}