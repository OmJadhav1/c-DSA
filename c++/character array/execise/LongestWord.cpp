#include<bits/stdc++.h>
using namespace std;
int main() {

//longest word in a sentence.
int n;
cin>>n;
cin.ignore();
char arr[n+1];

cin.getline(arr, n);
cin.ignore();

int i=0;
int cl=0; // current length
int ml=0; // max length
int st=0; //start
int maxst=0; //max start

while(1){

    if(arr[i]==' ' || arr[i] == '\0'){
        if(cl>ml){
            ml=cl;
            maxst=st;

        }
        cl=0;
        st=i+1;
    }
    else
    cl++;
    if(arr[i]=='\0'){
        break;
    }


    i++;
}
cout<<ml<<endl;
for(int i=0; i<ml; i++){
    cout<<arr[i+maxst];
}


     return 0;
}



