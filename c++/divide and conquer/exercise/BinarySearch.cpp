#include <bits/stdc++.h>
using namespace std;

int binary(vector<int> &arr, int s, int e, int key){

    if(arr[s]==key){
        return s;
    }

    int mid=(s+e)/2;
    while(arr.size()>0){
        if(arr[mid]<key){
            binary(arr,mid+1,e,key);
        }
        else{
            binary(arr,s,mid-1,key);
        }
    }
return -1;
}
int main()
{

    vector<int> arr{1,5,9,11,22,64,97};
    int n = arr.size();

    int key;
    cin >> key;

    cout << binary(arr,0, n-1, key) << endl;

    return 0;
}
