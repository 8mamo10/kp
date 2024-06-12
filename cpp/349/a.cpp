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
  int sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int a;
    cin >> a;
    sum += a;
  }
  cout << sum * -1 << endl;
  return 0;
}