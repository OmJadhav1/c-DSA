#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

node *buildtree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *n = new node(d);
    n->left = buildtree();
    n->right = buildtree();
    return n;
}

void levelorderprint(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();
            // insert a new null for the next level
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}

// sample binary tree
// 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
node *levelorderbuild()
{
    int d;
    cin >> d;

    node *root = new node(d);

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;

        if (c1 != -1)
        {
            current->left = new node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
        {
            current->left = new node(c2);
            q.push(current->right);
        }
    }
    return root;
}

int main()
{
    node *root = levelorderbuild();
    levelorderprint(root);

    return 0;
}