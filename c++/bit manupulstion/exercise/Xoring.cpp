#include <bits/stdc++.h>
using namespace std;

//not done by bit manupulation
int xoring(vector<int> arr)
{

    int num = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        num = num ^ arr[i];
    }

    return num;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 1, 3, 4};

    cout << xoring(arr);
    return 0;
}