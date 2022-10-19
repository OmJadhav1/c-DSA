#include <cstring>
#include <iostream>
using namespace std;

// problem : Read n strings and print the largest string.
int main() {
 
    char arr[1000];
    char largest[1000];

    int n; 
    cin>>n;
    cin.get();

    int largest_len=0;
    while(n--){
        cin.getline(arr , 1000);
        int len=strlen(arr); 

        if(len>largest_len){
            largest_len=len;
            strcpy(largest, arr);
        }

    }

    cout<<"largest string is :"<<largest;

     return 0;
}