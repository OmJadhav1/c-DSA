#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void print(node *tail)
{

    node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void insertNode(node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        node *node1 = new node(d);
        tail = node1;
        node1->next = node1;
    }
    else
    {
        // non empty list
        // assuming that the element is present in the list

        node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found
        // current is representing node with element
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        // non empty
        // assuming that "value" is present in the linked list
        node *prev = tail;
        node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // only one node linked list
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    node *tail = NULL;

    insertNode(tail, 0, 3);
    print(tail);

    insertNode(tail, 3, 9);
    print(tail);

    insertNode(tail, 9, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 9);
    print(tail);

    return 0;
}