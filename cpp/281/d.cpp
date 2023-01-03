#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll dp[105][105][100];

int main()
{
  int n, k, d;
  cin >> n >> k >> d;
  vector<int> a(n);
  for (auto &itr : a)
  {
    cin >> itr;
  }

  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < k + 1; j++)
    {
      for (int r = 0; r < d; r++)
      {
        dp[i][j][r] = -1;
      }
    }
  }
  dp[0][0][0] = 0;

  for (int i = 0; i < n; i++)
  {
    int ni = i + 1;
    for (int j = 0; j < k + 1; j++)
    {
      for (int r = 0; r < d; r++)
      {
        ll now = dp[i][j][r];
        if (now == -1)
        {
          continue;
        }
        {
          int nj = j + 1, nr = (r + a[i]) % d;
          dp[ni][nj][nr] = max(dp[ni][nj][nr], now + a[i]);
        }
        {
          int nj = j, nr = r;
          dp[ni][nj][nr] = max(dp[ni][nj][nr], now);
        }
      }
    }
  }
  cout << dp[n][k][0] << endl;

  return 0;
}
