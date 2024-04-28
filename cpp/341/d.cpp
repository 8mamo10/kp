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
  ll n, m, k;
  cin >> n >> m >> k;

  ll count = 0;
  for (ll i = 1;; i++)
  {
    if (i % n != 0 && i % m != 0)
    {
      continue;
    }
    if (i % n == 0 && i % m == 0)
    {
      continue;
    }
    count++;
    if (count >= k)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}