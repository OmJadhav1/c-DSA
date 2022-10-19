#include <bits/stdc++.h>
using namespace std;
// shallow copy
// in this we were passing array address
// so both products.name were pointing towards same memory
// so if we change one name  other will be changed
// as both are same
class product
{

    int id;
    char *name;
    int mrp;
    int sp;

public:
    // constructor
    // parameterized constructor
    product(int id, char *na, int mrp, int sp)
    {
        // arrow operater
        this->id = id;

        this->mrp = mrp;
        this->sp = sp;
        // deep copy
        name = new char[strlen(na) + 1];
        strcpy(name, na);
    }

    // making own copy constructor

    product(product &x)
    {
        id = x.id;
        // deep copy
        // so we are making a new array of size name+1
        // and storing oldcam string in that array
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
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

    // settrr for the name
    void setname(char *name)
    {
        strcpy(this->name, name);
    }

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
    product oldcam(camera);

    oldcam.setname("oldcam");
    oldcam.setsp(10);

    oldcam.show();
    camera.show();
    return 0;
}
