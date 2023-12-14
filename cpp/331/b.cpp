#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int N, S, M, L;
  cin >> N >> S >> M >> L;
  int ans = INT_MAX;

  for (int i = 0; i <= 100; i++)
  {
    for (int j = 0; j <= 100; j++)
    {
      for (int k = 0; k <= 100; k++)
      {
        int num = i * 6 + j * 8 + k * 12;
        if (num < N)
        {
          continue;
        }
        int bill = i * S + j * M + k * L;
        ans = min(ans, bill);
      }
    }
  }
  cout << ans << endl;
  return 0;
}