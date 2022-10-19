#include <iostream>

using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++){
        int x= arr[i];
        if(x==key)
            return i;
    }
    return -1;

}

int main()
{
    int arr[]={10,20,30,40,50};
    int n =sizeof(arr)/sizeof(int);
    cout<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    
    }

    int key;
    cout<<"enter element to find"<<endl;
    cin>>key;

    int index= LinearSearch(arr, n, key);
    cout<<index;

    return 0;
}