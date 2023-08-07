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
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  for (int i = 0; i < N; i++)
  {
    cin >> D[i];
  }

  int price = P;
  for (int i = 0; i < N; i++)
  {
    if (Q + D[i] < price)
    {
      price = Q + D[i];
    }
  }
  cout << price << endl;
  return 0;
}