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
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < n; i++)
  {
    int max = 0;
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
      if (j == i)
      {
        continue;
      }
      int d = pow((x[i] - x[j]), 2.0) + pow(y[i] - y[j], 2.0);
      if (d > max)
      {
        ans = j;
        max = d;
      }
    }
    cout << ans + 1 << endl;
  }
  return 0;
}