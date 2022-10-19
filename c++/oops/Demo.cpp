#include <bits/stdc++.h>
using namespace std;

class product
{

    int id;
    char name[100];

public:
    int mrp;
    int sp;
};

int main()
{
    product camera;
    camera.mrp = 200;
    camera.sp = 100;

    cout << sizeof(camera) << endl;
    cout << camera.mrp << endl;
    cout << camera.sp << endl;

    return 0;
}