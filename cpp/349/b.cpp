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

  for (int i = 1; i <= s.length(); i++)
  {
    int cnt = 0;
    for (auto itr : m)
    {
      if (itr.second == i)
      {
        cnt++;
      }
    }
    if (cnt != 0 && cnt != 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}