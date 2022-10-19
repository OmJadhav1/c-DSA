#include<iostream>
using namespace std;
int spiral(int arr[][100], int n , int m){

    int sr=0;
    int er=n-1;
    int sc=0;
    int ec=m-1;

    //outer loop (transverse array boundary)
    while(sc <=ec and sr<=er){

        //start row
        for(int col=sc; col<=ec ; col++){
            cout<<arr[sr][col]<<" ";
        }
        //end coloum
        for(int row=sr+1; row<=er; row++){
            cout<<arr[row][ec]<<" ";
        }
        //end row
        for(int col=ec-1; col>=sc; col--){
            if(sr==er){
                break;
            }
            cout<<arr[er][col]<<" ";
        }
        //start column
        for(int row=er-1; row>=sr+1; row--){
            if(sc==ec){
                break;
            }
            cout<<arr[row][sc]<<" ";
        }

        sr++;
        ec--;
        er--;  
        sc++;
    }
}

int main() {

    int arr[][100]={{1,2,3,4},
                {12,13,14,5},
                {11,16,15,6},
                {10,9,8,7}};

    int n=4, m=4;

    spiral(arr, n , m);

    return 0;
}