#include <bits/stdc++.h>
using namespace std;

void clearrange(int &n, int i, int j)
{

    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;

    int mask = a | b;
    n = n & mask;
}
int main()
{

    int n = 31;
    int i = 1;
    int j = 3;

    clearrange(n, i, j);

    cout << n << endl;

    return 0;
}
