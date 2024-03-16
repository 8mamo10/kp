#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

int main()
{
  int N;
  cin >> N;
  vector<int> Q(N), A(N), B(N);
  for (int i = 0; i < N; i++)
  {
    cin >> Q[i];
  }
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++)
  {
    cin >> B[i];
  }

  int ans = 0;
  for (int x = 0;; x++)
  {
    vector<int> r(N);
    for (int i = 0; i < N; i++)
    {
      r[i] = Q[i] - A[i] * x;
    }
    bool ok = true;
    for (int i = 0; i < N; i++)
    {
      if (r[i] < 0)
      {
        ok = false;
      }
    }
    if (!ok)
    {
      break;
    }
    int y = INT_MAX;
    for (int i = 0; i < N; i++)
    {
      if (B[i] == 0)
      {
        continue;
      }
      y = min(y, r[i] / B[i]);
    }
    ans = max(ans, x + y);
  }
  cout << ans << endl;
  return 0;
}