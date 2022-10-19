#include <bits/stdc++.h>
using namespace std;

//&n so we can update value of original n directly from function
void setbit(int &n, int i)
{

    int mask = (1 << i);

    n = (n | mask);
}
int main()
{

    int n = 5;
    int i;
    cin >> i;

    setbit(n, i);

    cout << n;

    return 0;
}
