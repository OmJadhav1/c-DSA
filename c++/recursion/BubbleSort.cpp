#include <bits/stdc++.h>
using namespace std;

void bubblesort(int a[], int n, int j)
{

    // base case
    if (n == 1 || n == 0)
    {
        return;
    }

    if (j == n - 1)
    {
        // reduce the problem size, and reset j to 0
        bubblesort(a, n - 1, 0);
        return;
    }
    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
    }

    bubblesort(a, n, j + 1);
}
int main()
{

    int arr[] = {-2, 6, 8, -7, 6, 11, 39, -2, 4};
    int n = sizeof(arr) / sizeof(n);

    bubblesort(arr, n, 0);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}
