#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isOk(const string &s1, const string &s2)
{
  for (size_t i = 0; i < s1.length(); i++)
  {
    if ((s1[i] == 'x') && (s2[i] == 'x'))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (auto &itr : s)
  {
    cin >> itr;
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (isOk(s[i], s[j]))
      {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}