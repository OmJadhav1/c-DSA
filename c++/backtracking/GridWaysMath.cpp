#include <bits/stdc++.h>
using namespace std;
// with this mathamatical formula
// we can solve this question in
// O(m+n) time i.e. linear time complexity
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fac(n - 1);
}

int gridways(int m, int n)
{
    // calculating every permutation
    int ans = (fac(m + n - 2)) / (fac(m - 1) * fac(n - 1));
    return ans;
}

int main()
{
    int m, n;
    cin >> m >> n;

    cout << gridways(m, n);

    return 0;
}