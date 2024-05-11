#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
//   using ull = unsigned long long;
//   long long INF = 1000000000000000000;

int main()
{
  string s;
  cin >> s;
  if (s[0] != '<')
  {
    cout << "No" << endl;
    return 0;
  }
  if (s[s.length() - 1] != '>')
  {
    cout << "No" << endl;
    return 0;
  }
  for (size_t i = 1; i < s.length() - 1; i++)
  {
    if (s[i] != '=')
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}