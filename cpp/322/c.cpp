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
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }

  vector<bool> s(n, false);
  for (int i = 0; i < m; i++)
  {
    s[a[i] - 1] = true;
  }

  // for (auto itr : s)
  // {
  //   cout << itr << ",";
  // }
  // cout << endl;

  int w = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i])
    {
      for (int j = 0; j <= w; j++)
      {
        cout << w - j << endl;
      }
      w = 0;
    }
    else
    {
      w++;
    }
  }
  return 0;
}