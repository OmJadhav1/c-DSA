#include <bits/stdc++.h>
using namespace std;

class product
{

    int id;
    char name[100];
    int mrp;
    int sp;

public:
    // setters
    void setmrp(int price)
    {
        mrp = price;
    }
    void setsp(int price)
    {
        if (price >= mrp)
        {
            sp = mrp;
        }
        else
        {
            sp = price;
        }
    }

    // getters
    int getmrp()
    {
        return mrp;
    }
    int getsp()
    {
        return sp;
    }
};

int main()
{
    product camera;
    // camera.mrp = 200;
    // camera.sp = 100;
    camera.setmrp(200);
    camera.setsp(300);

    cout << sizeof(camera) << endl;
    cout << camera.getmrp() << endl;
    cout << camera.getsp() << endl;

    return 0;
}
