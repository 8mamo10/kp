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

  vector<char> c(q), d(q);
  for (int i = 0; i < q; i++)
  {
    cin >> c[i] >> d[i];
  }

  for (int i = 0; i < q; i++)
  {
    char from = c[i];
    char to = d[i];
    for (auto &itr : s)
    {
      if (itr == from)
      {
        itr = to;
      }
    }
  }
  cout << s << endl;
  return 0;
}