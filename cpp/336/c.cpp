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
  ll N;
  cin >> N;
  N--;

  vector<int> a;
  while (N)
  {
    a.push_back(N % 5);
    N /= 5;
  }
  if (a.empty())
  {
    a.push_back(0);
  }
  reverse(begin(a), end(a));
  for (auto &x : a)
  {
    cout << x * 2;
  };
  cout << endl;
  return 0;
}