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

  map<int, ll> sums;
  for (auto itr : mp)
  {
    int v = itr.first;
    sums.insert({v, 0});
    for (auto itr2 : mp)
    {
      int w = itr2.first;
      if (v >= w)
      {
        continue;
      }
      sums[v] += itr2.second;
    }
  }

  for (int i = 0; i < N; i++)
  {
    int v = A[i];
    cout << sums[v] << " ";
  }
  cout << endl;
  return 0;
}