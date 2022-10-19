#include <bits/stdc++.h>
using namespace std;

void toh(int n, char src, char des, char hel)
{

    if (n == 0)
    {
        return;
    }

    toh(n - 1, src, hel, des);
    cout << "move from " << src << " to " << des << endl;
    toh(n - 1, hel, des, src);
}
int main()
{

    toh(3, 'a', 'c', 'b');
    return 0;
}