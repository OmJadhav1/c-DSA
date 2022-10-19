#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid and j <= e)
    {

        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
            //i++;
        }
        else
        {
            temp.push_back(arr[j++]);
            //j++;
        }
    }

    // copy rem elements from first array
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    // copy rem elements from second array
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    // copy back the elements from temp to original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
    return;
}

void mergesort(vector<int> &arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // recersive case
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);     // left part
    mergesort(arr, mid + 1, e); // right part
    return merge(arr, s, e);
}
int main()
{

    vector<int> arr{10, 5, 8, 2, 4, 6,- 3, 1};

    int s = 0;
    int e = arr.size()-1;
    mergesort(arr, s, e);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}