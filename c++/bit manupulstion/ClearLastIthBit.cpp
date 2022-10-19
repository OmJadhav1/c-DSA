#include <bits/stdc++.h>
using namespace std;

void clearlast(int &n, int i)
{

    int mask = (-1 << i);

    n = n & mask;
}
int main()
{

    int n = 15;
    int i = 2;

    clearlast(n, i);

    cout << n << endl;

    return 0;
}
