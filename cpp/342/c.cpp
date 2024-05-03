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
  string s;
  int q;
  cin >> n >> s >> q;

  string from, to;
  from = to = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < q; i++)
  {
    char c, d;
    cin >> c >> d;
    for (auto &itr : to)
    {
      if (itr == c)
      {
        itr = d;
      }
    }
  }
  for (auto itr : s)
  {
    for (int i = 0; i < 26; i++)
    {
      if (itr == from[i])
      {
        cout << to[i];
      }
    }
  }
  cout << endl;
}