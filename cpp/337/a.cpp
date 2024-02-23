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
  int N;
  cin >> N;
  int X = 0, Y = 0;
  for (int i = 0; i < N; i++)
  {
    int x, y;
    cin >> x >> y;
    X += x;
    Y += y;
  }
  if (X > Y)
  {
    cout << "Takahashi" << endl;
  }
  else if (X == Y)
  {
    cout << "Draw" << endl;
  }
  else
  {
    cout << "Aoki" << endl;
  }
  return 0;
}