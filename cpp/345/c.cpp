#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

ll c2(ll n)
{
  return n * (n - 1) / 2;
}

int main()
{
  string s;
  cin >> s;
  int n = s.size();

  ll same = 0;
  map<char, int> cnt;
  for (auto x : s)
  {
    cnt[x]++;
  }
  for (auto x : cnt)
  {
    int m = x.second;
    same += c2(m);
  }
  ll diff = c2(n) - same;
  ll ans = diff;
  if (same)
  {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
