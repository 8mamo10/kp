#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll f(ll n, ll p)
{
  if (n == 0)
  {
    return 0;
  }
  n /= p;
  return n + f(n, p);
}

int main()
{
  ll k;
  cin >> k;
  vector<pair<ll, int>> ps;
  {
    ll x = k;
    for (ll i = 2; i * i <= x; i++)
    {
      if (x % i)
      {
        continue;
      }
      int cnt = 0;
      while (x % i == 0)
      {
        x /= i;
        cnt++;
      }
      ps.emplace_back(i, cnt);
    }
    if (x != 1)
    {
      ps.emplace_back(x, 1);
    }
  }

  // for (auto itr = ps.begin(); itr != ps.end(); itr++)
  // {
  //   cout << itr->first << ":" << itr->second << endl;
  // }

  ll ac = k, wa = 0;
  while (ac - wa > 1)
  {
    ll wj = (ac + wa) / 2;
    bool ok = true;
    for (auto [p, cnt] : ps)
    {
      if (f(wj, p) < cnt)
        ok = false;
    }
    if (ok)
    {
      ac = wj;
    }
    else
    {
      wa = wj;
    }
  }
  cout << ac << endl;
  return 0;
}
