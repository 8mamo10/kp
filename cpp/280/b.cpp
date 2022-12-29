#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<ll> s(n);
  for (auto &it : s)
  {
    cin >> it;
  }

  vector<ll> a(n);
  ll total = 0;
  for (int i = 0; i < n; i++)
  {
    total += s[i];
  }
  cout << total << endl;
  return 0;
}