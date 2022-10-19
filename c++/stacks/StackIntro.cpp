#include <bits/stdc++.h>
#include <stack>
using namespace std;

class stack1
{
public:
    int *arr;
    int top;
    int size;

    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void insertAtBottom(stack1 &st, int data)
{
    // base case
    if (st.isempty())
    {
        st.push(data);
        return;
    }
    // rec case
    int temp = st.peek();
    st.pop();

    insertAtBottom(st, data);
    st.push(temp);
}

void reverse(stack1 st)
{
    // reversing a stack by recersion
    // we are saving and removing top element
    // then revversig rest stack
    // as we hit base case we will insert all data in the empty stack at bottom
    if (st.isempty())
    {
        return;
    }
    int temp = st.peek();
    st.pop();
    reverse(st);
    insertAtBottom(st, temp);
}

int main()
{
    stack1 st(5);
    st.push(22);
    st.push(45);
    st.push(94);
    st.push(15);
    // st.push(56);
    // st.pop();
    // cout << st.peek() << endl;
    // cout << st.isempty() << endl;
    // insertAtBottom(st, 5);
    reverse(st);
    while (!st.isempty())
    {
        cout << st.peek() << endl;
        st.pop();
    }

    return 0;
}