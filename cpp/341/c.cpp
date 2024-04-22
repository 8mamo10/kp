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
  int h, w, n;
  cin >> h >> w >> n;
  string t;
  cin >> t;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }
  for (auto itr : s)
  {
    cout << itr << endl;
  }
  return 0;
}