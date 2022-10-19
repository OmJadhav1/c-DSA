#include <bits/stdc++.h>
using namespace std;

// pass by refernce
void applytax(int &money)
{

    float tax = 0.10;
    money = money - (money * tax);
}

int main()
{

    int income;
    cin >> income;

    applytax(income);
    cout << income;

    return 0;
}