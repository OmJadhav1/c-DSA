#include <bits/stdc++.h>
using namespace std;

void clear(int &n, int i)
{
    int clear = ~(1 << i);
    n = (n & clear);
}

void update(int &n, int i, int v)
{

    clear(n, i);
    int mask = (v << i);
    n = n | mask;
}
int main()
{

    int n = 13;
    int i;
    cin >> i;

    update(n, i, 1);

    cout << n;

    return 0;
}