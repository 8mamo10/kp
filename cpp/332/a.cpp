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
  int N, S, K;
  cin >> N >> S >> K;
  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    int P, Q;
    cin >> P >> Q;
    sum += P * Q;
  }
  if (sum < S)
  {
    sum += K;
  }
  cout << sum << endl;
  return 0;
}