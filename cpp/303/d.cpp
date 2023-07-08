#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
long long INF = 1000000000000000000;

int main()
{
  ll X, Y, Z;
  cin >> X >> Y >> Z;
  string S;
  cin >> S;

  // 0: OFF, 1: ON
  vector dp(S.size() + 1, vector<ll>(2, INF));
  dp[0][0] = 0;

  for (size_t i = 0; i < S.size(); i++)
  {
    int cur;
    if (S[i] == 'a')
    {
      cur = 0;
    }
    else
    {
      cur = 1;
    }
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        ll v = dp[i][j];
        if (j != k)
        {
          v += Z;
        }
        if (cur == k)
        {
          v += X;
        }
        else
        {
          v += Y;
        }
        dp[i + 1][k] = min(dp[i + 1][k], v);
      }
    }
  }
  cout << min(dp[S.size()][0], dp[S.size()][1]) << endl;
  return 0;
}