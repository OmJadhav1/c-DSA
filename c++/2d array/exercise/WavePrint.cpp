#include<bits/stdc++.h>
using namespace std;

void wave(int arr[][10], int n, int m){

    int row=n-1;
    int col=m-1;

    while(col>(-1)){

            for(int i=0; i<=row; i++){
                cout<<arr[i][col]<<" ";
            }
        col--;
        
        //for odd arrays
        if(col<0){
            break;
        }
        
        
            for(int i=row; i>=0; i--){
                cout<<arr[i][col]<<" ";
            }
        col--;
        
    
    }

}
int main() {

   /* int arr[][10]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};*/

    int arr[][10]={{1,2,3},{4,5,6},{7,8,9}};

    int n=3;
    int m=3;

    wave(arr, n ,m);

     return 0;
}