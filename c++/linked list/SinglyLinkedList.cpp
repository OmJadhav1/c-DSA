#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    // to realse memory of dynamically allocated deleted node
    ~node()
    {
        int value = this->data;
        // free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void print(node *&head)
{
    // traversing through the linked list
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // insert at any position
    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {

        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deletnode(int position, node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        // realsing memory of deleted node
        delete curr;
    }
}

void reverselinked(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        cout << head << " ";
        // return;
    }

    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

int main()
{

    // crreated a new node
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    // insertAtHead(head, 22);
    // insertAtTail(tail, 32);
    print(head);
    // insertAtPosition(tail, head, 4, 55);
    // print(head);
    reverselinked(head);
    // deletnode(2, head);
    print(head);
    return 0;
}