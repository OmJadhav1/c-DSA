#include <iostream>
//import cstring
#include <cstring>
using namespace std;
int main() {
 
    char arr[]={'A','B','C','\0'};
    cout<<arr<<endl;

    char arr1[]= "abc";
    cout<<arr1<<endl;

    //count of visible character.
    cout<<strlen(arr)<<endl;
    //this cal null character also.
    cout<<sizeof(arr1)<<endl;

    char arr2[100];
    //cin takes input only before space character.
    cin>>arr2;
    cout<<arr2;


     return 0;
}