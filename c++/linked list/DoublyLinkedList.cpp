#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// traversing a linked list
void print(node *head, node *tail)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;
}

// gives length of linked list
int getlength(node *head)
{
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// inserting at head
void insertAtHead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// inserting at tail
void insertAtTail(node *&head, node *&tail, int d)
{

    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// inserting at any position
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, d);
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
        insertAtTail(head, tail, d);
        return;
    }
    // creating a node for d
    node *nodeToInsert = new node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

void deleteNode(int position, node *&head)
{

    // deleting first node
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {

        // deleting any other position node
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 14);
    insertAtHead(head, tail, 45);
    insertAtHead(head, tail, 89);
    print(head, tail);
    insertAtTail(head, tail, 56);
    print(head, tail);

    insertAtPosition(tail, head, 3, 99);
    print(head, tail);

    deleteNode(3, head);
    print(head, tail);
    return 0;
}