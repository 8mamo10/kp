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
  auto x = S.find_last_of('.');
  cout << S.substr(x + 1) << endl;
  return 0;
}