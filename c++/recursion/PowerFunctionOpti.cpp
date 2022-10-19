#include <bits/stdc++.h>
using namespace std;
// in this problem we are taking time and space of logn
int poweropti(int a, int n)
{

    if (n == 0)
    {
        return 1;
    }

    int sub = poweropti(a, n / 2);
    int subsq = sub * sub;
    // if the  n is od d then we have to multpily it one more time with a
    if (n & 1)
    {
        return a * subsq;
    }
    return subsq;
}
int main()
{

    int a, n;
    cin >> a >> n;

    cout << poweropti(a, n) << endl;

    return 0;
}