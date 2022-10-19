#include <bits/stdc++.h>
using namespace std;
int main()
{

    string name[50] = {"om", "prasad", "amit", "pratik", "prajwal", "sarthak"};
    float sgpa[50] = {8.8, 8.8, 8.9, 9.0, 9.2, 9.0};

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> name[i];
    //     cin >> sgpa[i];
    // }
    float n;
    cin >> n;
    int x = sizeof(name) / sizeof(string);
    for (int i = 0; i < x; i++)
    {
        if (sgpa[i] == n)
        {
            cout << name[i] << endl;
        }
    }

    return 0;
}