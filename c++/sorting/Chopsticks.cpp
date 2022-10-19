#include<bits/stdc++.h>
using namespace std;

int count(vector<int> arr, int d){

    int count=0;
    int n=arr.size();

    sort(arr.begin(), arr.end());

    for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i]<=d){
            count++;
            i++;
        }

    }
return count;

}

int main() {
 
    vector<int> arr{1,5,2,4,6,9,7};

    int d;
    cin>>d;
        
    int count1=count( arr , d);
    cout<<count1<<endl;

     return 0;
}