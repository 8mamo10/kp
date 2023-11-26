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
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  int m = *max_element(A.begin(), A.end());
  for (auto &c : A)
  {
    if (c == m)
    {
      c = -1;
    }
  }
  cout << *max_element(A.begin(), A.end()) << endl;
  return 0;
}