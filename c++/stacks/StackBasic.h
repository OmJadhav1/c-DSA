template <typename t>
class stack;

template <typename t>
class node
{
public:
    t data;
    node<t> *next;

    node(t d)
    {
        data = d;
    }
};

template <typename t>
class stack
{
    node<t> *head;

public:
    stack()
    {
        head = NULL;
    }

    void push(t data)
    {
        node<t> *n = new node<t>(data);
        n->next = head;
        head = n;
    }

    bool empty()
    {
        return head == NULL;
    }

    t top()
    {
        return head->data;
    }

    void pop()
    {
        if (head != NULL)
        {
            node<t> *temp = head;
            head = head->next;
            delete temp;
        }
    }
};