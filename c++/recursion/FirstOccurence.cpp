#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }
    // recersive case
    if (arr[0] == key)
    {
        return 0;
    }
    int subindex = firstocc(arr + 1, n - 1, key);
    if (subindex != -1)
    {
        return subindex + 1;
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 8, 6, 2, 11, 12};
    int n = sizeof(arr) / sizeof(n);

    int key = 11;

    cout << firstocc(arr, n, key) << endl;

    return 0;
}