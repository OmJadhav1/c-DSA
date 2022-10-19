#include <bits/stdc++.h>
using namespace std;

void clearrange(int &n, int i, int j)
{

    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;

    int mask = a | b;
    n = n & mask;
}

void replacerange(int &n, int i, int j, int m)
{

    clearrange(n, i, j);
    int mask = (m << i);
    n = n | mask;
}
int main()
{
    int n = 15;
    int i = 1;
    int j = 3;
    int m = 2;

    replacerange(n, i, j, m);

    cout << n;

    return 0;
}