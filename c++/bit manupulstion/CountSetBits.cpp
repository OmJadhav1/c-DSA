#include <bits/stdc++.h>
using namespace std;

int countbit(int n)
{

    int count = 0;

    while (n > 0)
    {
        if (n & 1 == 1)
        {
            count++;
            n = n >> 1;
        }
        else
        {
            n = n >> 1;
        }
    }
    return count;
}

int main()
{

    int n;
    cin >> n;

    int count = countbit(n);
    cout << count;
    return 0;
}