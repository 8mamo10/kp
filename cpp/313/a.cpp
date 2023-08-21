#include <bits/stdc++.h>
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
  vector<int> P(N);
  for (int i = 0; i < N; i++)
  {
    cin >> P[i];
  }

  int m = 0;
  for (int i = 1; i < N; i++)
  {
    m = max(m, P[i]);
  }

  cout << max(0, m - P[0] + 1) << endl;
  return 0;
}