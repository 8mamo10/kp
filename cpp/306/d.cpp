#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int N;
  cin >> N;
  vector<ll> X(N), Y(N);
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
  }

  ll dp[N + 1][2];
  for (int i = 0; i <= N; i++)
  {
    dp[i][0] = -4e18;
    dp[i][1] = -4e18;
  }

  dp[0][0] = 0;

  for (int i = 0; i < N; i++)
  {
    if (X[i] == 0)
    {
      dp[i + 1][0] = max(dp[i][0], max(dp[i][0], dp[i][1]) + Y[i]);
    }
    else
    {
      dp[i + 1][1] = max(dp[i][1], dp[i][0] + Y[i]);
    }

    dp[i + 1][0] = max(dp[i][0], dp[i + 1][0]);
    dp[i + 1][1] = max(dp[i][1], dp[i + 1][1]);
  }

  cout << max(dp[N][0], dp[N][1]) << endl;
  return 0;
}