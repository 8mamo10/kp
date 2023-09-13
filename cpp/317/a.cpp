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
  int n, h, x;
  cin >> n >> h >> x;
  vector<int> p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (h + p[i] >= x)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}