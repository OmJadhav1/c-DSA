
#include <cstring>
#include <iostream>
using namespace std;
int main() {
 
    char arr[]=" google";
    char arr1[]=" apple";

    //string length
    cout<<strlen(arr)<<endl;

    //string copy
    char arr2[100];
    //(destination , source)
    strcpy(arr2, arr1);
    cout<<arr2<<endl;

    //string compare gives output 0 when strings are same and 1 when different.
    cout<<strcmp(arr,arr1)<<endl;

    //string concatenate
    strcat(arr,arr1);
    cout<<arr<<endl;
    cout<<arr1;
     return 0;
}