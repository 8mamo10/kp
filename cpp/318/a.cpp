#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int n, m, p;
  cin >> n >> m >> p;
  if (m > n)
  {
    cout << 0 << endl;
    return 0;
  }
  cout << (n - m) / p + 1 << endl;
  return 0;
}