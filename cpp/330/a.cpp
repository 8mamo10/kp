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
  int N, L;
  cin >> N >> L;
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    int A;
    cin >> A;
    if (A >= L)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}