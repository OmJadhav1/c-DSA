#include <bits/stdc++.h>
using namespace std;

void get(int n, int i)
{

    int mask = (1 << i);
    if ((n & mask) > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}
int main()
{

    int n = 6;
    
    int i;
    cin >> i;

    get(n, i);

    return 0;
}