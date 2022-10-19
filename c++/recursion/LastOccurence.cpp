#include <bits/stdc++.h>
using namespace std;

int lastocc(int arr[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }

    int subindex = lastocc(arr + 1, n - 1, key);
    if (subindex == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subindex + 1;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 2, 5, 8};
    int n = sizeof(arr) / sizeof(int);

    int key = 2;
    cout << lastocc(arr, n, key) << endl;

    return 0;
}