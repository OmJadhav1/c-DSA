#include<bits/stdc++.h>
using namespace std;
int main() {
    
    //2Dvector
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9,10},{11,12}};

    //update
    arr[0][0] +=10;

    for(int i=0; i<arr.size(); i++){
        //for every number in arr[i] print that number.
        for(int num : arr [i]){
            cout<<num<<", ";
        }
        cout<<endl;
    }

     return 0;
}