#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n;
  ll t;
  cin >> n >> t;

  vector<int> a(n);
  for (auto &itr : a)
  {
    cin >> itr;
  }

  ll total = 0;
  for (auto &itr : a)
  {
    total += itr;
  }

  ll remaining = t % total;

  for (int i = 0; i < n; i++)
  {
    if (remaining < a[i])
    {
      printf("%d %lld\n", i + 1, remaining);
      return 0;
    }
    else
    {
      remaining -= a[i];
    }
  }
  return 0;
}
