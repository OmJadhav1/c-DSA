#include <bits/stdc++.h>
using namespace std;
class product
{

    int id;
    char *name;
    int mrp;
    int sp;

public:
    // constructor
    product()
    {
        cout << "inside default constructor" << endl;
    }
    // parameterized constructor
    product(int id, char *na, int mrp, int sp)
    {
        // arrow operater
        this->id = id;

        this->mrp = mrp;
        this->sp = sp;
        name = new char[strlen(na) + 1];
        strcpy(name, na);
    }

    // making own copy constructor

    product(product &x)
    {
        id = x.id;
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
        mrp = x.mrp;
        sp = x.sp;
    }

    // copy assignment operator
    void operator=(product &x)
    {
        // deep copy inside copy assignment
        id = x.id;
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
        mrp = x.mrp;
        sp = x.sp;
    }
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

    // settrr for the name
    void setname(char *name)
    {
        strcpy(this->name, name);
    }

    // destroyer
    ~product()
    {
        cout << "deleting :" << name << endl;
        if (name != NULL)
        {
            delete[] name;
            name = NULL;
        }
    }
};

int main()
{
    product camera(24, "camera", 400, 100);
    // called constructor two times
    product oldcam;

    oldcam = camera;

    oldcam.setname("oldcam");
    oldcam.setsp(10);
    camera.show();
    oldcam.show();

    return 0;
}
