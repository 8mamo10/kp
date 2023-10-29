#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  ll N;
  cin >> N;

  ll res = N;
  while (res % 2 == 0)
  {
    res = res / 2;
  }
  while (res % 3 == 0)
  {
    res = res / 3;
  }
  if (res == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}