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
  map<char, int> m;
  for (auto itr : s)
  {
    m[itr]++;
  }
  for (auto itr : m)
  {
    if (itr.second == 1)
    {
      cout << s.find_first_of(itr.first) + 1 << endl;
      return 0;
    }
  }
  return 0;
}