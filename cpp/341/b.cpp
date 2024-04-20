#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++)
  {
    int s, t;
    cin >> s >> t;
    v.push_back({s, t});
  }

  return 0;
}