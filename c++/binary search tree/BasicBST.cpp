#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;

    node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

node *bst(node *root, int key)
{
    if (root == NULL)
    {
        return new node(key);
    }

    if (key < root->key)
    {
        root->left = bst(root->left, key);
    }
    else
    {
        root->right = bst(root->right, key);
    }

    return root;
}

void printInOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // left,root,right
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}

// T.C.  O(H)
// h-height logn<=H<=N depend on structure of tree
int search(node *root, int key)
{

    if (root == NULL)
    {
        return false;
    }

    if (root->key == key)
    {
        return true;
    }

    if (key < root->key)
    {
        search(root->left, key);
    }
    else
    {
        search(root->right, key);
    }
}
node *findmin(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
node *remove(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root->key)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        // when current node matches with the key
        // no children
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // single child
        else if (root->left == NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        // 2 children
        else
        {
            node *temp = findmin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }

        return root;
    }
} // challenge : print all elements of bst which lie in range k1 and k2
void printrange(node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }

    if (root->key >= k1 && root->key <= k2)
    {
        // call on both sides
        printrange(root->left, k1, root->key);
        cout << root->key << " ";
        printrange(root->right, root->key, k2);
    }
    else if (root->key > k2)
    {
        printrange(root->left, k1, k2);
    }
    else
    {
        // root->key<k1
        printrange(root->right, k1, k2);
    }
}

int main()
{
    node *root = NULL;
    int arr[] = {[-10, -3, 0, 5, 9]};

    for (int x : arr)
    {
        root = bst(root, x);
    }
    printInOrder(root);
    //  cout << search(root, 3);
    //  cout << endl;
    //  int key;
    //  cin >> key;
    //  remove(root, key);
    //  printInOrder(root);

    cout << endl;
    cout << "range is" << endl;
    printrange(root, 6, 8);

    return 0;
}