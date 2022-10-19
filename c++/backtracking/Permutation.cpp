#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
// time complexity O(n!)
void permute(vector<int> &arr, int idx)
{

    if (idx == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i], arr[idx]);
        permute(arr, idx + 1);
        swap(arr[i], arr[idx]);
    }
    return;
}
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    permute(arr, 0);

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}

// we can use inbuilt function also do get all permutation
/*
sort(arr.begin(), arr.end());
do{
    ans.push_back(arr);
}while(next_permutstion(arr.begin().arr.end()));
*/