#include <bits/stdc++.h>
using namespace std;

// sample binary tree
// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
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

// preorder build of the tree (root,left,right)
void printPreOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

// inorder build of the tree (left,root,right)
void printInOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

// postorder build of the tree (left,right,root)
// used max  cau for many problems
// we need left and right node and then root node
void printPostOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    return max(h1, h2) + 1;
}

int main()
{
    node *root = buildtree();
    printPreOrder(root);
    cout << endl;

    printInOrder(root);
    cout << endl;

    printPostOrder(root);
    cout << endl;

    cout << height(root) << endl;
    return 0;
}