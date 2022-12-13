#include <bits/stdc++.h>
using namespace std;

class Trienode
{
public:
    char data;
    Trienode *children[26];
    bool isTerminal;

    Trienode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    Trienode *root;

    Trie()
    {
        root = new Trienode('\0');
    }

    void insertUtil(Trienode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assumption word will be in caps
        int index = word[0] - 'A';
        Trienode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new Trienode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertword(string word)
    {
        // we usng recursion thats why new function is made
        insertUtil(root, word);
    }

    bool searchUtil(Trienode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        Trienode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool search(string word)
    {
        return searchUtil(root, word);
    }

    void removeUtil(Trienode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            if (root->isTerminal == true)
                root->isTerminal = false;
            return;
        }

        // assumption word will be in caps
        int index = word[0] - 'A';
        Trienode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return;
        }

        // recursion
        removeUtil(child, word.substr(1));
    }

    void removeword(string word)
    {
        // we usng recursion thats why new function is made
        removeUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();

    t->insertword("ARM");
    t->insertword("DO");
    t->insertword("LOVE");
    t->insertword("LOVER");
    cout << t->search("LOVE") << endl;
    t->removeword("LOVER");
    cout << t->search("LOVER") << endl;

    return 0;
}