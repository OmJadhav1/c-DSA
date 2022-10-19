#include <iostream>
#include <vector>
using namespace std;
//used when data is given in fixed range
//e.g. marks of students (in range 0-100)
void counting(int arr[], int n){

    int largest =-1;

    for (int i=0; i<n; i++){
        largest= max(largest,arr[i]);
    }

    vector<int> freq(largest+1,0);

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    int j=0;

    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
        arr[j]=i;
        freq[i]--;
        j++;
        }
    }
return;
}


int main() {
 
    int arr[]={2,2,4,8,66,7,5,88,4,2,6,8,19,7,5};
    int n= sizeof(arr)/sizeof(int);

    counting(arr , n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


     return 0;
}