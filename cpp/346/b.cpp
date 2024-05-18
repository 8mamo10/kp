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
  int w, b;
  cin >> w >> b;
  int n = w + b;
  string s = "wbwbwwbwbwbw";
  size_t m = s.size();
  for (size_t i = 0; i < m; i++)
  {
    int nw = 0, nb = 0;
    for (int j = 0; j < n; j++)
    {
      if (s[(i + j) % m] == 'w')
      {
        nw++;
      }
      else
      {
        nb++;
      }
    }
    if (w == nw and b == nb)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}