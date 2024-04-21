#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<pair<ll, ll>> v(n);
  for (int i = 0; i < n - 1; i++)
  {
    ll s, t;
    cin >> s >> t;
    v[i] = {s, t};
  }
  for (int i = 0; i < n - 1; i++)
  {
    ll amount = a[i];
    ll from = v[i].first;
    ll to = v[i].second;
    if (amount >= from)
    {
      ll add = (amount / from) * to;
      a[i + 1] += add;
      a[i] -= add;
    }
  }
  cout << a[n - 1] << endl;
  return 0;
}