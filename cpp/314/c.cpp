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

  string prev = S;
  string ans = S;
  for (int i = 1; i <= M; i++)
  {
    vector<int> v;
    for (int j = 0; j < N; j++)
    {
      if (C[j] == i)
      {
        v.push_back(j);
      }
    }
    for (size_t j = 0; j < v.size() - 1; j++)
    {
      int from = v[j];
      int to = v[j + 1];
      ans[to] = prev[from];
    }
    if (v.size() >= 2)
    {
      int from = v[v.size() - 1];
      int to = v[0];
      ans[to] = prev[from];
    }
    prev = ans;
  }
  cout << ans << endl;
  return 0;
}