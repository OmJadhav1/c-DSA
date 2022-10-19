#include <iostream>
using namespace std;
int main() {

    char arr[10];

    char temp= cin.get();

    //until your input not contain "." this will take inputs
    //this will print output in chunks
    while(temp!='.'){
        cout<<temp;
        temp=cin.get();
    }

     return 0;
}