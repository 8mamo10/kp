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
  int N;
  cin >> N;
  int ans = 0;
  while (true)
  {
    if ((N & 1) == 1)
    {
      cout << ans << endl;
      return 0;
    }
    ans++;
    N = N >> 1;
  }
  return 0;
}