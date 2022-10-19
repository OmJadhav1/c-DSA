#include<bits/stdc++.h>
using namespace std;
int main() {
 
 int x=10;

//address of data in variable x
 cout<<&x<<endl;

//demo pointer
//it holds address of another vaiable
int *ptr= &x;

cout<<ptr<<endl;

//address of pointer variable
cout<<&ptr<<endl;

//pointer to pointer variable
int ** ptr1=&ptr;

cout<<ptr1<<endl;

     return 0;
}