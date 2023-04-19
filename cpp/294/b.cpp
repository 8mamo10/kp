#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H);
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      int x;
      cin >> x;
      A[i].push_back(x);
    }
  }

  for (auto i : A)
  {
    for (auto j : i)
    {
      if (j == 0)
      {
        cout << '.';
      }
      else
      {
        cout << (char)('A' + j - 1);
      }
    }
    cout << endl;
  }
  return 0;
}