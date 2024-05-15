#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
//   using ull = unsigned long long;
//   long long INF = 1000000000000000000;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    cout << a[i] * a[i + 1] << " ";
  }
  cout << endl;
  return 0;
}