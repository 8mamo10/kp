#include <bits/stdc++.h>
using namespace std;

int H, W, ans;
vector<vector<int>> A;

void dfs(int i, int j, set<int> s)
{
  if (s.count(A[i][j]))
  {
    return;
  }
  s.insert(A[i][j]);
  if (i == H - 1 && j == W - 1)
  {
    ans++;
    return;
  }
  if (j + 1 < W)
  {
    dfs(i, j + 1, s);
  }
  if (i + 1 < H)
  {
    dfs(i + 1, j, s);
  }
}

int main()
{
  cin >> H >> W;
  A = vector(H, vector<int>(W));
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      cin >> A[i][j];
    }
  }
  dfs(0, 0, set<int>());
  cout << ans << endl;
  return 0;
}