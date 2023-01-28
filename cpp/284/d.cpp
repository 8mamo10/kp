#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int T;
  cin >> T;
  vector<ll> tests(T);
  for (auto &itr : tests)
  {
    cin >> itr;
  }
  for (auto itr : tests)
  {
    ll N = itr;
    ll p, q = 0;
    for (ll i = 2; i * i * i <= N; i++)
    {
      if (N % i != 0)
      {
        continue;
      }
      if ((N / i) % i == 0)
      {
        p = i;
        q = N / i / i;
      }
      else
      {
        q = i;
        p = (ll)sqrt(N / i);
      }
      break;
    }
    printf("%lld %lld\n", p, q);
  }

  return 0;
}