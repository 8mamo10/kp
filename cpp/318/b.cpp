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
  int n;
  cin >> n;
  vector<vector<int>> s(101, vector<int>(101, 0));
  for (int i = 0; i < n; i++)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = c; i < d; i++)
    {
      for (int j = a; j < b; j++)
      {
        s[i][j] = 1;
      }
    }
  }
  int ans = 0;
  for (auto itr : s)
  {
    for (auto itr2 : itr)
    {
      if (itr2 == 1)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}