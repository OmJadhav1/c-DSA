#include <iostream>
using namespace std;
//time complexity O(n^2)
int subarraysum(int arr[], int n ){

    int prefix[100]={0};
    prefix[0]= arr[0];

    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+ arr[i];
    }
    int lsa=0;
    for(int i=0;i<n; i++){
        for(int j=i; j<n; j++){
            //using iterating operator
            int saa= i>0 ? prefix[j] - prefix[i-1] : prefix[j];

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