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
  map<int, vector<ll>> ice;
  for (int i = 0; i < n; i++)
  {
    int f;
    ll s;
    cin >> f >> s;
    ice[f].push_back(s);
  }

  vector<ll> best_ice;
  for (auto itr : ice)
  {
    sort(itr.second.begin(), itr.second.end(), comp);
    best_ice.push_back(itr.second[0]);
  }

  ll ans = 0;
  // s + t
  if (best_ice.size() >= 2)
  {
    sort(best_ice.begin(), best_ice.end(), comp);
    ans = max(ans, best_ice[0] + best_ice[1]);
  }
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