#include <bits/stdc++.h>
using namespace std;

bool arrcheck(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return true;
    }

    if (arr[i] < arr[i + 1] & arrcheck(arr, i + 1, n))
    {
        return true;
    }

    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 7, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << arrcheck(arr, 0, n) << endl;

    return 0;
}