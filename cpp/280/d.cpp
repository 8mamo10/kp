#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  ll k;
  cin >> k;
  ll total = 1;
  for (ll n = 1; n < k; n++)
  {
    total *= n;
    if (total % k == 0)
    {
      cout << n << endl;
      return 0;
    }
  }
  return 0;
}
