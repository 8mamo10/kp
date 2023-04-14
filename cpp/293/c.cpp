#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W;
  ciin >> H >> W;
  vector<vector<int>> V;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      int A;
      cin >> A;
      V[i][j] = A;
    }
  }
  return 0;
}