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
  int N;
  cin >> N;
  vector<ll> repunits;
  for (ll a = 1; a < 1e12; a = a * 10 + 1)
  {
    repunits.push_back(a);
  }
  set<ll> s;
  for (ll a : repunits)
  {
    for (ll b : repunits)
    {
      for (ll c : repunits)
      {
        s.insert(a + b + c);
      }
    }
  }
  vector<ll> d;
  for (ll x : s)
  {
    d.push_back(x);
  }
  sort(d.begin(), d.end());
  cout << d[N - 1] << endl;
  return 0;
}