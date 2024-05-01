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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  int q;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;
    auto itr = find(p.begin(), p.end(), a);
    int apos = distance(p.begin(), itr);
    itr = find(p.begin(), p.end(), b);
    int bpos = distance(p.begin(), itr);
    if (apos < bpos)
    {
      cout << a << endl;
    }
    else
    {
      cout << b << endl;
    }
  }
  return 0;
}