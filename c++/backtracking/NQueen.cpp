#include <bits/stdc++.h>
using namespace std;

// as for every row we are picking one cell in nC1 ways
// for n rows it is n*n*n*n.....upto n times
// time complextity is n^n times

// for solving it efficiently
// we can skip the checking of column where queen is already placed
// cause ones a queen placed we can't place a queen in that row and column
// by this for n rows selecting columns will be n*n-1*n-2.....1
// cause every time one queen is placed one column will be eliminated
// time comlpexity is n!
// which is also high and we cant solve ot for hogher values

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

bool solve(int n, int board[][20], int i)
{
    // base case
    if (i == n)
    {
        printboard(n, board);
        return true;
    }

    // rec case
    // try to place a queen in every row
    for (int j = 0; j < n; j++)
    { // checking current position
        if (canplace(board, n, i, j))
        {
            board[i][j] = 1; // here we cant type i+1 as i++
            bool success = solve(n, board, i + 1);
            if (success)
            {
                return true;
            }
            // backtrack
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{

    int board[20][20] = {0};

    int n;
    cin >> n;
    solve(n, board, 0);

    return 0;
}