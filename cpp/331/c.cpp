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
  // map<int, int> mp;
  // mp.insert({1, 111});
  // mp.insert({3, 333});
  // mp.insert({2, 222});
  // for (auto itr : mp)
  // {
  //   cout << itr.first << ":" << itr.second << endl;
  // }
  // return 0;

  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  map<int, ll> mp;
  for (int i = 0; i < N; i++)
  {
    int v = A[i];
    if (mp.find(v) == mp.end())
    {
      mp.insert({v, v});
      continue;
    }
    mp[v] += v;
  }

  for (int i = 0; i < N; i++)
  {
    int v = A[i];
    ll ans = 0;
    for (auto itr : mp)
    {
      if (itr.first <= v)
      {
        continue;
      }
      ans += itr.second;
    }
    cout << ans << " ";
  }
  cout << endl;
  return 0;
}