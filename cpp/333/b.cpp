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
  map<string, int> P = {
      {"AB", 1},
      {"AC", 2},
      {"AD", 2},
      {"AE", 1},
      {"BA", 1},
      {"BC", 1},
      {"BD", 2},
      {"BE", 2},
      {"CA", 2},
      {"CB", 1},
      {"CD", 1},
      {"CE", 2},
      {"DA", 2},
      {"DB", 2},
      {"DC", 1},
      {"DE", 1},
      {"EA", 1},
      {"EB", 2},
      {"EC", 2},
      {"ED", 1},
  };

  string S, T;
  cin >> S >> T;
  if (P[S] == P[T])
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}