#include <iostream>
using namespace std;
//brute force approach
int subarraysum(int arr[], int n ){

    int lsa=0;
    for(int i=0;i<n; i++){
        for(int j=i; j<n; j++){
            int saa= 0;
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<',';
                saa +=arr[k];
            }
        cout<<endl;
        cout<<saa<<endl<<endl;
        //printing largest sum of array
        if( lsa <  saa){
                lsa=saa;
        }
        }

    }
    return lsa;

}


int main() {
 
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(int);

    int q=subarraysum(arr, n);
    cout<<q;

     return 0;
}