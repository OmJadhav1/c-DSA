#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    if ((n & n - 1) == 0)
    {
        cout << "power of 2";
    }
    else
    {
        cout << "not a power of 2";
    }

    return 0;
}