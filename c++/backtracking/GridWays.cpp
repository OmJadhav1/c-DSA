#include <bits/stdc++.h>
using namespace std;

int gridways(int i, int j, int m, int n)
{
    // base case
    if (i == m - 1 and j == n - 1)
    {
        return 1;
    }
    // corner case
    // stop making call at bottom on last row
    // and at right at last column
    if (j >= n or i >= m)
    {
        return 0;
    }

    // rec case
    int ans = gridways(i + 1, j, m, n) + gridways(i, j + 1, m, n);
    return ans;
}
int main()
{

    int m, n;
    cin >> m >> n;

    cout << gridways(0, 0, m, n);

    return 0;
}