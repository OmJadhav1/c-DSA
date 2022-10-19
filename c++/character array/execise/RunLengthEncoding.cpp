#include<bits/stdc++.h>
using namespace std;

//run length encoding for string compression
//if compressed string is bigger than original string return original string.

string compress(string str){

    int n= str.length();

    string output;

    for (int i=0; i<n; i++){

        int count =1;

        while(i<n-1 and str[i+1] == str[i]){
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }

    if (output.length() > str.length())   {
        return str;
    }
    return output;
}
int main() {
 
    string s1="aaabbcc";
    string s2="abccddde";

    cout<<compress(s1)<<endl;
    cout<<compress(s2)<<endl;

     return 0;
}

//time complexitiy is linear
// becuase both for and while loop are just traversng the input string
//we are not running for every point of i