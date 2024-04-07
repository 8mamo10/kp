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
  int a, b, d;
  cin >> a >> b >> d;
  for (int i = 0;; i++)
  {
    int v = a + d * i;
    cout << v << " ";
    if (v == b)
    {
      cout << endl;
      return 0;
    }
  }
  return 0;
}