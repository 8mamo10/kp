#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

map<ll, ll> m;
ll f(ll n)
{
  if (n == 1)
  {
    return 0;
  }
  if (m.count(n))
  {
    return m[n];
  }
  return m[n] = f(n / 2) + f((n + 1) / 2) + n;
}

int main()
{
  ll n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}