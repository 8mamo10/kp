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

int main()
{
  ll n;
  cin >> n;

  ll ans = 0;
  vector<ll> a;
  a.push_back(n);
  while (true)
  {
    // printv(a);
    auto x = max_element(a.begin(), a.end());
    if (*x < 2)
    {
      break;
    }
    ans += *x;
    ll l = ceil((long double)*x / 2);
    ll r = floor((long double)*x / 2);
    a.erase(x);
    a.push_back(l);
    a.push_back(r);
  }
  cout << ans << endl;
  return 0;
}