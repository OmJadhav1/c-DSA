#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{

    int i = s - 1;
    int pivot = arr[e];

    for (int j = s; j < e; j++)
    {
        if (arr[j] < arr[e])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // lastly we will swap the first element of right part with pivot element
    // and get the pivot element in right position
    swap(arr[i + 1], arr[e]);
    // we will return index of pivot element
    // so e can do furtur quicksort from that index
    return i + 1;
}

void quicksort(vector<int> &arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    // recursive case
    // from this we will get index of pivot element
    int p = partition(arr, s, e);
    // we will use this index to quicksort left and right part
    // we will sort upto (p-1) cause upto that index element smaller than pivot exist
    quicksort(arr, s, p - 1);
    // we will sort from (p+1) cause from that index element geater than pivot exist
    quicksort(arr, p + 1, e);
    // and at p pivot element exist which is in coorect position
}
int main()
{
    vector<int> arr{1, 8, 5, 2, 7, 3, 6, 4};
    cout << arr.size() << endl;
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    for (int v : arr)
    {
        cout << v << " ";
    }

    return 0;
}