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
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  vector<int> v(N);
  for (int i = 1; i < N; i++)
  {
    if (S[i] == S[i - 1])
    {
      v[i] = v[i - 1] + 1;
    }
    else
    {
      v[i] = v[i - 1];
    }
  }
  // printv(v);
  for (int i = 0; i < Q; i++)
  {
    int l, r;
    cin >> l >> r;
    cout << v[r - 1] - v[l - 1] << endl;
  }
  return 0;
}