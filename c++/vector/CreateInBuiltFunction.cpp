#include <bits/stdc++.h>
using namespace std;

class Vector
{
    // data member
    int *arr;
    int cs;
    int ms;

public:
    Vector(int max = 1)
    {

        cs = 0;
        ms = max;
        arr = new int[ms];
    }

    void push_back(int d)
    {
        // two cases
        if (cs == ms)
        {
            // create a new array and delete the old one , double the capacity
            int *oldarr = arr;
            ms = 2 * ms;
            arr = new int[ms];
            // copy elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldarr[i];
            }
            // delete old array
            delete[] oldarr;
        }
        // ad  new element
        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    bool isEmpty()
    {
        return cs == 0;
    }

    // front element
    int front()
    {
        return arr[0];
    }

    // last elment
    int back()
    {
        return arr[cs - 1];
    }

    // element at i'th index
    int at(int i)
    {
        return arr[i];
    }

    // size of array
    int size()
    {
        return cs;
    }

    // capacity of array
    int capacity()
    {
        return ms;
    }
};

int main()
{

    Vector v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    return 0;
}