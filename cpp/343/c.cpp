#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
//  using ull = unsigned long long;
//  long long INF = 1000000000000000000;

int main()
{
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll i = 1; (i * i * i) <= n; i++)
  {
    string s = to_string(i * i * i);
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
    {
      ans = (i * i * i);
    }
  }
  cout << ans << endl;
  return 0;
}