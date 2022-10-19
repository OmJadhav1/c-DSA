#include <bits/stdc++.h>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printspell(int n)
{

    if (n == 0)
    {
        return;
    }
    int last = n % 10;
    printspell(n / 10);
    cout << spell[last] << " ";
}

int main()
{

    int n;
    cin >> n;
    printspell(n);

    return 0;
}
