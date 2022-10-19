#include <bits/stdc++.h>
using namespace std;

// creates copy of given object
// by initialise an object using another object of same class
// syntax
// class_name(const class_name &object_name)

class product
{

    int id;
    char name[100];
    int mrp;
    int sp;

public:
    // constructor
    // parameterized constructor
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

    // making own copy constructor
    // copy constructor must pass its first parameter by refernce
    // and as we created our own copy construtor here
    // it will assume that data will be filled by us
    // so it will show garbage value initally
    product(product &x)
    {
        id = x.id;
        mrp = x.mrp;
        sp = x.sp;
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

    void show()
    {
        cout << "name:" << name << endl;
        cout << "id:" << id << endl;
        cout << "mrp:" << mrp << endl;
        cout << "selling price:" << sp << endl;
        cout << "----------------" << endl;
    }
};

int main()
{
    product camera(24, "faojsajo", 400, 100);
    // making a copy of camera by
    //  using default copy constructor
    product webcam(camera);
    webcam.show();

    // anothe rway of callimg copy constructor
    product handcam = camera;
    handcam.show();
    return 0;
}
