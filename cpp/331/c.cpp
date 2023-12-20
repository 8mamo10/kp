#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
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
  vector<vector<int>> is(1000001);
  for (int i = 0; i < N; i++)
  {
    is[A[i]].push_back(i);
  }

  vector<ll> ans(N);
  ll now = 0;
  for (int x = is.size(); x >= 1; x--)
  {
    for (auto itr : is[x])
    {
      ans[itr] = now;
    }
    now += (ll)x * is[x].size();
  }

  for (auto itr : ans)
  {
    cout << itr << " ";
  }
  cout << endl;
}