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
  ll B;
  cin >> B;
  for (ll i = 0; i < 20; i++)
  {
    ll ans = 1;
    for (ll j = 0; j < i; j++)
    {
      ans *= i;
    }
    if (ans == B)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}