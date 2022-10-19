#include <iostream>
using namespace std;
int main() {
 
    char arr[100];

    cin.getline(arr, 100);

    int x=0;
    int y=0;

    //PROGRAM FOR CALCULATING DISPLACEMENT DONE
    for(int i=0; arr[i]!='\0'; i++){
        switch(arr[i]){
            case 'E': x++;
                break;

            case 'W': x--;
                break;

            case 'N': y++;
                break;

            case 'S': y--;
                break;
        }
    }

    cout<<"x and y is :"<<x <<" "<< y<<endl;

    if(x>=0 and y>=0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"N";
        }

    }
    else if(x<=0 and y>=0){
        while(x++){
            cout<<"W";
        }
        while(y--){
            cout<<"N";
        }

    }
    else if(x<=0 and y<=0){
        while(x++){
            cout<<"W";
        }
        while(y++){
            cout<<"S";
        }

    }
    else if(x>=0 and y<=0){
        while(x--){
            cout<<"E";
        }
        while(y++){
            cout<<"s";
        }

    }

     return 0;
}