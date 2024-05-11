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
  ll x;
  cin >> x;
  string s = to_string(x);
  if (s[s.length() - 1] == '0')
  {
    cout << x / 10 << endl;
    return 0;
  }
  if (x > 0)
  {
    cout << x / 10 + 1 << endl;
  }
  else
  {
    cout << x / 10 << endl;
  }
  return 0;
}