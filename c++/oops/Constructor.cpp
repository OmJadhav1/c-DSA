#include <bits/stdc++.h>
using namespace std;
// overloading means calling two or more functions with same name
// i.e. called as function overloading
// and overloading with constructor is called as constructor overloading
class product
{

    int id;
    char name[100];
    int mrp;
    int sp;

public:
    // constructor
    product()
    {
        cout << "this is inside normal constructor";
    }

    // parameterized constructor
    // here we are doing constructor overloading
    // we are calling two constructor with same name
    //(all constructors name is class name).
    product(int id, char *na, int mrp, int sp)
    {
        // arrow operater
        this->id = id;
        // we cann't do this for array
        // this->name=name;
        strcpy(name, na);
        this->mrp = mrp;
        this->sp = sp;
    }
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
    // if here we don not give parameters it will call first constructor
    // caz we have given parameters it will call second constructor
    // at a time only one constructor is called
    product camera(24, "faojsajo", 400, 100);

    cout << sizeof(camera) << endl;
    cout << camera.getmrp() << endl;
    cout << camera.getsp() << endl;

    return 0;
}
