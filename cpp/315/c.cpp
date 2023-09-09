#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

bool comp(int i, int j) { return (i > j); }

int main()
{
  int n;
  cin >> n;
  map<ll, vector<ll>> ice;
  map<ll, ll> max_ice;
  for (int i = 0; i < n; i++)
  {
    ll f, s;
    cin >> f >> s;
    ice[f].push_back(s);
    max_ice[f] = max(max_ice[f], s);
  }

  /////
  // for (auto itr : ice)
  // {
  //   cout << itr.first << ":";
  //   for (auto itr2 : itr.second)
  //   {
  //     cout << itr2 << " ";
  //   }
  //   cout << endl;
  // }

  // for (auto itr : max_ice)
  // {
  //   cout << itr.first << ":" << itr.second << endl;
  // }
  /////

  ll ans = 0;
  // s + t
  if (max_ice.size() >= 2)
  {
    for (auto itr : max_ice)
    {
      for (auto itr2 : max_ice)
      {
        if (itr.first == itr2.first)
        {
          continue;
        }
        ans = max(ans, itr.second + itr2.second);
      }
    }
  }
  // cout << ans << endl;
  //  s + t / 2
  for (auto itr : ice)
  {
    vector<ll> s = itr.second;
    if (s.size() < 2)
    {
      continue;
    }
    sort(s.begin(), s.end(), comp);
    ans = max(ans, s[0] + s[1] / 2);
  }
  cout << ans << endl;
  return 0;
}