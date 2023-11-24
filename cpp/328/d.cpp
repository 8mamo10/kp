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
  string S;
  cin >> S;

  while (true)
  {
    size_t pos = S.find("ABC");
    // cout << pos << endl;
    if (pos == string::npos)
    {
      cout << S << endl;
      return 0;
    }
    S.erase(pos, 3);
  }
  cout << S << endl;
  return 0;
}