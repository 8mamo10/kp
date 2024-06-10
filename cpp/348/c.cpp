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
  vector<int> a(n), c(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> c[i];
  }
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    if (m.find(c[i]) == m.end())
    {
      m[c[i]] = a[i];
    }
    else
    {
      m[c[i]] = min(a[i], m[c[i]]);
    }
  }
  int ans = 0;
  for (auto itr : m)
  {
    ans = max(ans, itr.second);
  }
  cout << ans << endl;
  return 0;
}