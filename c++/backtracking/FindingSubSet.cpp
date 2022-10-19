#include <bits/stdc++.h>
using namespace std;

void findsub(char *input, char *output, int i, int j)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if (output[0] == '\0')
        {
            cout << "null";
        }
        cout << output << endl;
        return;
    }

    // rec case
    // include the ith letter
    output[j] = input[i];
    findsub(input, output, i + 1, j + 1);
    // excludethe ith letter
    findsub(input, output, i + 1, j);
}
int main()
{

    char input[100];
    char output[100];

    cin >> input;
    findsub(input, output, 0, 0);

    return 0;
}