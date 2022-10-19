#include <bits/stdc++.h>
using namespace std;
// time complexity
// as incrementation of 2 elements
// O(n/2) which is O(n)
void wave(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }

        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {2, 1, 5, 3, 8, 9, 6};
    int n = sizeof(arr) / sizeof(int);

    wave(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}