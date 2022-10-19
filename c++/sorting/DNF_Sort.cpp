#include <bits/stdc++.h>
using namespace std;
// duch national flag sort
//  also called as 0,1,2 sort
//  time complexity O(n)
void dnf(int arr[], int low, int n)
{
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{

    int arr[] = {0, 2, 1, 0, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    dnf(arr, 0, n);
    int low = 0;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}