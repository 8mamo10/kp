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

  set<string> st;
  int len = (int)s.length();
  for (int i = 0; i < len; i++)
  {
    for (int j = 1; j <= len; j++)
    {
      if (i + j > len)
      {
        break;
      }
      string t = s.substr(i, j);
      st.insert(t);
    }
  }
  cout << st.size() << endl;
  return 0;
}