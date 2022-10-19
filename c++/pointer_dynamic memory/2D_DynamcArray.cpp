#include <bits/stdc++.h>
using namespace std;

int * * 2Darr(int row, int col)
{

    int **arr = new int *[row];

    // allocation of memory for each row
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // uptil we have created 2D array
    // now put data in that 2D array

    int value = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

int main()
{

    int row, col;
    cin >> row >> col;

    int **arr1 = 2Darr(row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}