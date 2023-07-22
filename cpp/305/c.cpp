#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++)
  {
    cin >> S[i];
  }

  int top = H, bottom = 0, left = W, right = 0;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (S[i][j] == '#')
      {
        top = min(top, i);
        bottom = max(bottom, i);
        left = min(left, j);
        right = max(right, j);
      }
    }
  }
  // printf("%d:%d:%d:%d\n", top, bottom, left, right);
  return 0;
}