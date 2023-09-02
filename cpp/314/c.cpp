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
  int N, M;
  cin >> N >> M;
  string S;
  cin >> S;
  vector<int> C(N);
  for (int i = 0; i < N; i++)
  {
    cin >> C[i];
  }

  vector<int> p[N + 1];
  for (int i = 0; i < N; i++)
  {
    p[C[i]].push_back(i);
  }

  string t(N, '?');
  for (int i = 1; i <= M; i++)
  {
    int k = p[i].size();
    for (int j = 0; j < k; j++)
    {
      t[p[i][(j + 1) % k]] = S[p[i][j]];
    }
  }
  cout << t << endl;
  return 0;
}