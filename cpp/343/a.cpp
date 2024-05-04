#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
//  using ull = unsigned long long;
//  long long INF = 1000000000000000000;

int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = 0; i <= 9; i++)
  {
    if (i != (a + b))
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}