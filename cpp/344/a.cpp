#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
//   using ull = unsigned long long;
//   long long INF = 1000000000000000000;

int main()
{
  string s;
  cin >> s;
  bool show = true;
  for (auto itr : s)
  {
    if (itr == '|')
    {
      show = !show;
      continue;
    }
    if (show)
    {
      cout << itr;
    }
  }
  cout << endl;
  return 0;
}