#include <bits/stdc++.h>
using namespace std;
               // pointer variable
void video(int *views)
{
     // derefrence operator both
     *views = *views + 1;
}

int main()
{
     int views = 100;

     video(&views); // address of views

     cout << views;
     return 0;
}