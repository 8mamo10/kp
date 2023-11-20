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
  int N, X;
  cin >> N >> X;
  vector<int> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }
  int sum = 0;
  for (auto itr : S)
  {
    if (itr <= X)
    {
      sum += itr;
    }
  }
  cout << sum << endl;
  return 0;
}