#include <bits/stdc++.h>
using namespace std;

struct student
{
    string pos;
    int rollno;
    string name;
    float marks;
    char grade;
};
int main()
{
    struct students s[5] = {"first", 15, "prt", 50, "a", "second", 100, "monica", 500};

    searchsg(s, 3, 531210);

    return 0;
}

void p(struct students ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].rollno << "      " << ar[i].name << endl;
    }
    cout << "\n";
}

void searchsg(struct students ar[], int n, int sgpa)
{
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i].marks == sgpa)
        {
            cout << ar[i].name << endl;
            st++;
        }
    }
    if (st == 0)
    {
        cout << "no student found with given sgpa";
    }
}