#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b; // lexicographic order
    }
    return a.length() < b.length();
}
void findsub(char *input, char *output, int i, int j, vector<string> &list)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp(output);
        list.push_back(temp);
        return;
    }

    // rec case
    // include the ith letter
    output[j] = input[i];
    findsub(input, output, i + 1, j + 1, list);
    // excludethe ith letter
    findsub(input, output, i + 1, j, list);
}
int main()
{

    char input[100];
    char output[100];

    vector<string> list;

    cin >> input;
    findsub(input, output, 0, 0, list);
    sort(list.begin(), list.end(), compare);

    // print the output
    for (auto s : list)
    {
        cout << s << endl;
    }

    return 0;
}