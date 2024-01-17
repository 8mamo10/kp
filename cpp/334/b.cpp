#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

ll floor(ll x, ll m)
{
  ll r = (x % m + m) % m;
  return (x - r) / m;
}

int main()
{
  ll A, M, L, R;
  cin >> A >> M >> L >> R;
  L -= A, R -= A;
  cout << floor(R, M) - floor(L - 1, M) << endl;
  return 0;
}