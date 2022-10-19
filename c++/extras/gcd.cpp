#include <bits/stdc++.h>
using namespace std;

// this is a euclid's gcd algorithm
int gcd1(int a, int b)
{

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b -= a;
        }
    }
    return b;
}

int gcd2(int a, int b)
{
    // by modulo
    //
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{

    int a, b;
    cin >> a >> b;

    cout << gcd1(a, b) << endl;
    cout << gcd2(a, b) << endl;

    return 0;
}