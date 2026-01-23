#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W, 0));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }
    }

    vector<int> columns(H, 0);
    vector<int> rows(W, 0);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            columns[i] += A[i][j];
            rows[j] += A[i][j];
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << columns[i] + rows[j] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}