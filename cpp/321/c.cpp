#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  vector<ll> ans;
  for (int i = 2; i < (1 << 10); i++)
  {
    ll x = 0;
    for (int j = 9; j >= 0; j--)
    {
      if (i & (1 << j))
      {
        x *= 10;
        x += j;
      }
    }
    ans.push_back(x);
  }

  int k;
  cin >> k;
  sort(ans.begin(), ans.end());
  cout << ans[k - 1] << endl;
  return 0;
}
