#include <iostream>
#include <vector>
using namespace std;
//incomplete
vector<int>  reverse(vector<int> a){
    
    int n=a.size();
    for(int i=n-1; i>=0; i--){
        a.push_back(a[i]);       
    }
    
   
}

int main() {
    // Write C++ code here
    vector<int> a={1,2,3,4};
    int n= a.size();

    reverse(a);
    
    cout<<n;

    for(int j=n+1; j<=a.size(); j++){
        cout<<a[j]<<" ";
    }
    
    return 0;
}