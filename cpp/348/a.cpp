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
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    if ((i + 1) % 3 == 0)
    {
      cout << 'x';
    }
    else
    {
      cout << 'o';
    }
  }
  cout << endl;
  return 0;
}