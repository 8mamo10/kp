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
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a % k == 0)
    {
      cout << a / k << " ";
    }
  }
  cout << endl;
  return 0;
}