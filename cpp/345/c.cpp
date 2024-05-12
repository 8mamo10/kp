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
  string s;
  cin >> s;
  map<char, vector<int>> m;
  for (size_t i = 0; i < s.length(); i++)
  {
    m[s[i]].push_back(i);
  }
  int ans = 1;
  for (auto itr : m)
  {
    for (auto itr2 : m)
    {
      if (itr.first == itr2.first)
      {
        continue;
      }
      ans += itr.second.size() * itr2.second.size();
    }
  }
  cout << ans / 2 << endl;
  return 0;
}
