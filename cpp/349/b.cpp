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
    if (m.find(itr) == m.end())
    {
      m[itr] = 1;
    }
    else
    {
      m[itr]++;
    }
  }
  for (auto itr : m)
  {
    cout << itr.first << ":" << itr.second << endl;
  }
  return 0;
}