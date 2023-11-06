#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++)
  {
    cin >> S[i];
  }

  int ans = 0;
  vector<vector<bool>> visited(H, vector<bool>(W, false));
  // for (auto itr : visited)
  // {
  //   for (auto itr2 : itr)
  //   {
  //     cout << itr2 << " ";
  //   }
  //   cout << endl;
  // }

  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (S[i][j] == '.' || visited[i][j])
      {
        continue;
      }
      queue<pair<int, int>> que;
      que.push({i, j});
      while (!que.empty())
      {
        pair<int, int> p = que.front();
        que.pop();
        int y = p.first;
        int x = p.second;
        for (int k = 0; k < 8; k++)
        {
          int ny = y + dy[k];
          int nx = x + dx[k];
          if (0 <= ny && nx < H && 0 <= nx && nx < W && S[ny][nx] == '#')
          {
            que.push(ny, nx);
          }
        }
      }
    }
  }
  return 0;
}