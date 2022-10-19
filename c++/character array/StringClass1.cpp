#include<bits/stdc++.h>
using namespace std;
int main() {
 
    string s; 
    int n=5;
    vector<string> sarr;
    string temp;

    while(n--){
        getline(cin, temp);
        sarr.push_back(temp);
    }

    for(int i=0; i<sarr.size(); i++){
        cout<<sarr[i]<<","<<endl;
    }

     return 0;
}