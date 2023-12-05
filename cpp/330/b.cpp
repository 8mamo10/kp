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
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (auto c : A)
  {
    if (c < L)
    {
      cout << L;
    }
    else if (L <= c && c < R)
    {
      cout << c;
    }
    else if (R <= c)
    {
      cout << R;
    }
    cout << " ";
  }
  cout << endl;
  return 0;
}