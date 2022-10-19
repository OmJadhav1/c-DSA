#include <bits/stdc++.h>
using namespace std;

bool canplace(int board[][20], int n, int x, int y)
{

    // for column
    for (int k = 0; k < x; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }

    // for left digonal
    int i = x;
    int j = y;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--, j--;
    }

    // right digonal
    i = x;
    j = y;
    while (i >= 0 and j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--, j++;
    }

    return true;
}
void printboard(int n, int board[][20])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int solve(int n, int board[][20], int i)
{
    // base case
    if (i == n)
    {
        printboard(n, board);
        return 1;
    }

    // rec case
    // try to place a queen in every row
    int ways = 0;
    for (int j = 0; j < n; j++)
    { // checking current position
        if (canplace(board, n, i, j))
        {
            board[i][j] = 1;
            ways += solve(n, board, i + 1);
            // backtrack
            board[i][j] = 0;
        }
    }
    return ways;
}

int main()
{
    // in this we are counting
    // the no of ways in wwhich the combination of queen can be put in n rows
    int board[20][20] = {0};

    int n;
    cin >> n;
    cout << solve(n, board, 0);

    return 0;
}