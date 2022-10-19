#include <bits/stdc++.h>
//#include<vector>
using namespace std;
int main()
{

    vector<int> arr = {5, 8, 3, 7, 4, 9, 6, 1};

    int key;
    cin >> key;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if (it != arr.end())
    {
        cout << "present at index " << it - arr.begin();
    }
    else
    {
        cout << "element not found" << endl;
    }

    return 0;
}