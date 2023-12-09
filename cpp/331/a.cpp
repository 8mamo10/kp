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
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;

  // 1/1 ~ M/D
  // M * D days
  if (m == M && d == D)
  {
    printf("%d 1 1\n", y + 1);
    return 0;
  }
  if (d == D)
  {
    printf("%d %d \n", y, m + 1);
    return 0;
  }
  printf("%d %d %d \n", y, m, d + 1);
  return 0;
}