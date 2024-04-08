#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

int main()
{
  int q;
  cin >> q;
  vector<int> ans;
  for (int i = 0; i < q; i++)
  {
    int type, value;
    cin >> type >> value;
    if (type == 1)
    {
      ans.push_back(value);
    }
    else
    {
      cout << ans[ans.size() - value] << endl;
    }
  }
  return 0;
}