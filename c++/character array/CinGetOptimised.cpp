#include <iostream>
using namespace std;
int main() {

    char arr[100];

    char temp= cin.get();

    int len=0;

    //until your input not contain . this will take inputs
    //store all inputs in array then print it.
    while(temp!='.'){

        arr[len++]=temp;
        temp=cin.get();
    }

    arr[len]='\0';
    cout<<arr;
     return 0;
}