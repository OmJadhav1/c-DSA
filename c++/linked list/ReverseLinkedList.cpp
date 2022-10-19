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
};

node *reverselinked(node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
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
    return prev;
}
int main()
{
    node *node1 = new node(10);
    node *node1 = new node(20);
    node *node1 = new node(30);
    node *node1 = new node(40);
    node *node1 = new node(50);

    node *head = node1;
    reverselinked(head);

    return 0;
}