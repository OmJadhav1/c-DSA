#include <iostream>
using namespace std;

int BinearySearch(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "enter element to find" << endl;
    cin >> key;

    int index = BinearySearch(arr, n, key);
    cout << index;

    return 0;
}