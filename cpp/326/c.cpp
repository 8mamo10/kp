#include <bits/stdc++.h>
#include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  ll N, M;
  cin >> N >> M;
  vector<ll> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  printv(A);

  return 0;
}