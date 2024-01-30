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
  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= N; j++)
    {
      for (int k = 0; k <= N; k++)
      {
        if (i + j + k <= N)
        {
          printf("%d %d %d\n", i, j, k);
        }
      }
    }
  }
  return 0;
}