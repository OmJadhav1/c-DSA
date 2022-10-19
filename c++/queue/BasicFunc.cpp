#include <bits/stdc++.h>
using namespace std;

class queue1
{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;

public:
    queue1(int default_size)
    {
        ms = default_size;
        arr = new int[ms];
        cs = 0;
        front = 0;
        rear = ms - 1;
    }

    bool full()
    {
        return cs == ms;
    }

    bool empty()
    {
        return cs == 0;
    }

    void push(int data)
    {
        if (!full())
        {
            // making circular array
            rear = (rear + 1) % ms;
            arr[rear] = data;
            cs++;
        }
    }

    void pop()
    {
        if (!empty())
        {
            front = (front + 1) % ms;
            cs--;
        }
    }

    int getfront()
    {
        return arr[front];
    }
};

int main()
{
    // stl also provide this function (push,empty,pop,front);
    // include <queue> library
    // queue<int> q;

    queue1 q(10);
    q.push(11);
    q.push(56);
    cout << q.getfront() << endl;
    while (!q.empty())
    {
        cout << q.getfront() << endl;
        q.pop();
    }
    cout << q.empty() << endl;
    cout << q.full() << endl;
    return 0;
}