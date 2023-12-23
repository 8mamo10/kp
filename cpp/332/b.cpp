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
  int K, G, M;
  cin >> K >> G >> M;

  int glass = 0, mug = 0;
  for (int i = 0; i < K; i++)
  {
    if (glass == G)
    {
      glass = 0;
    }
    else if (mug == 0)
    {
      mug = M;
    }
    else
    {
      // glass != G
      // mug != 0
      int diff = G - glass;
      if (mug >= diff)
      {
        glass = G;
        mug -= diff;
      }
      else
      {
        glass += mug;
        mug = 0;
      }
    }
  }
  cout << glass << " " << mug << endl;
  return 0;
}