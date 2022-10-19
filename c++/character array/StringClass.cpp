#include <iostream>
#include <string>
using namespace std;
int main() {

    //initialisation of string 
    //this string uses dynamic array i.e. size can be changed in runtime.
    string s = "hello world";
    cout<<s<<endl;
   
    string s1;
    // we can also take input fro user
    //. is delimitator i.e. it tells function when to stop
    getline(cin, s1), '.';
   
    cout<<s1<<endl;
     return 0;
}