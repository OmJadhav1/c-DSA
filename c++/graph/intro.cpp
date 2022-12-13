#include <bits/stdc++.h>
using namespace std;

// A Guide to Master Graph Algorithms for Competitive Programming
// https://www.codingninjas.com/blog/2021/06/05/a-guide-to-master-graph-algorithms-for-competitive-programming/#Advanced_algorithms_in_Graph

class graph
{

public:
    unordered_map<int, list<int>> adj;

    void addedge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        // direction 0 means undirescted graph
        // direction 1 means directed graph;
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printgraph()
    {
        for (auto x : adj)
        {
            cout << x.first << "-> ";
            for (auto y : x.second)
            {
                cout << y << ",";
            }
            cout << endl;
        }
    }
};

int main()
{

    int n;
    cout << "enter no of rows" << endl;
    cin >> n;
    int m;
    cout << "enter no of edges" << endl;
    cin >> m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g.addedge(u, v, 0);
    }

    g.printgraph();

    return 0;
}