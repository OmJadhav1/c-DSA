#include <bits/stdc++.h>
using namespace std;

void clear(int &n, int i)
{
    int clear = ~(1 << i);
    n = (n & clear);
}
int main()
{

    int n = 13;
    int i;
    cin >> i;
    clear(n, i);
    cout << n;

    return 0;
}