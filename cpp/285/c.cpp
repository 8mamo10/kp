#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  string S;
  cin >> S;
  int n = S.length();
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    ll c = (S[i] - 'A' + 1);
    for (int j = 0; j < n - 1 - i; j++)
    {
      c *= 26;
    }
    ans += c;
  }
  cout << ans << endl;
  return 0;
}