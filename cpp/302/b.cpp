#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ull = unsigned long long;

int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++)
  {
    cin >> S[i];
  }

  string SNUKE = "snuke";

  for (int si = 0; si < H; si++)
  {
    for (int sj = 0; sj < W; sj++)
    {
      for (int v = 0; v < 8; v++)
      {
        int i = si, j = sj;
        for (int k = 0; k < 5; k++)
        {
          if (i < 0 || j < 0 || i >= H || j >= W)
          {
            break;
          }
          if (S[i][j] != SNUKE[k])
          {
            break;
          }
          if (k == 4)
          {
            i = si;
            j = sj;
            for (int nk = 0; nk < 5; nk++)
            {
              printf("%d %d\n", i + 1, j + 1);
              i += di[v];
              j += dj[v];
            }
            return 0;
          }
          i += di[v];
          j += dj[v];
        }
      }
    }
  }
  return 0;
}