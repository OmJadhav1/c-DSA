#include <bits/stdc++.h>
using namespace std;
int main()
{

    // creation
    unordered_map<string, int> m;

    // insertion
    // 1
    pair<string, int> pair1 = make_pair("om", 1);
    m.insert(pair1);

    // 2
    pair<string, int> pair2("shreyash", 2);
    m.insert(pair2);

    // 3
    m["ujjwal"] = 3;

    // updation
    m["ujjwal"] = 4;

    // search - gives value of key
    // both process works same for existed pairs
    cout << m["shreyash"] << endl;
    cout << m.at("om") << endl;
    // but if we search for non exist pair
    // 1-will create a pair of that key with value 0
    // 2- will give error not found
    // cout << m["yash"] << endl;
    cout << m.at("yash") << endl;

    return 0;
}