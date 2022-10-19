#include <bits/stdc++.h>
using namespace std;

int countbithack(int n)
{

    int count = 0;

    while (n > 0)
    {

        n = (n & n - 1);
        count++;
    }
    return count;
}
int main()
{

    int n;
    cin >> n;

    int count = countbithack(n);
    cout << count;

    return 0;
}
