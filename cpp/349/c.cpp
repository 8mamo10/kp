#include <bits/stdc++.h>
// #include <iostream>
#include <map>
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
  string s, t;
  cin >> s >> t;

  int index = -1;
  for (int i = 0; i < t.length(); i++)
  {
    char c = t[i];
  }

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
  for (auto itr : t)
  {
  }
  return 0;
}