#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }

    int f1 = fibo(n - 1);
    int f2 = fibo(n - 2);

    // for simplicity
    return f1 + f2;
    // we can code as return fibo(n-1) + fibo(n-2)
}
int main()
{
    int n;
    cin >> n;

    cout << fibo(n) << endl;

    return 0;
}