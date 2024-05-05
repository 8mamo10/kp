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
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int a;
      cin >> a;
      if (a == 1)
      {
        cout << j + 1 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}