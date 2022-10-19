#include <bits/stdc++.h>
using namespace std;

void print1(int n, int a)
{
    if (a == n)
    {
        cout << a;
        return;
    }

    cout << a << endl;
    print1(n, a + 1);
}

void print2(int n)
{
    if (n==0)
    {
        return;
    }

    cout << n << endl;
    //write this line of code before cout then it will print in increasing order
    print2(n-1);
}

int main()
{

    int n;
    cin >> n;

    print1(n, 1);
    cout<<endl;
    print2(n);
    return 0;
}