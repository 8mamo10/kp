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
  string S;
  cin >> S;
  map<char, int> m;
  for (auto x : S)
  {
    m[x]++;
  }
  char ans = 'a';
  int num = 0;
  for (auto x : m)
  {
    if (x.second > num)
    {
      ans = x.first;
      num = x.second;
    }
  }
  cout << ans << endl;
  return 0;
}