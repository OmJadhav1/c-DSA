#include <bits/stdc++.h>
using namespace std;

bool arrcheck(int arr[], int n)
{
    // base case
    if (n == 0 | n == 1)
    {
        return true;
    }

    // recersive case
    if (arr[0] < arr[1] & arrcheck(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 7, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << arrcheck(arr, n) << endl;

    return 0;
}
