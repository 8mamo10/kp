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
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      cout << s[i] << " ";
    }
    else
    {
      cout << s[i] - s[i - 1] << " ";
    }
  }
  cout << endl;
  return 0;
}