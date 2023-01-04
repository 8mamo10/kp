#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool skip = false;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '"')
    {
      skip = !skip;
      continue;
    }
    if (s[i] == ',' && !skip)
    {
      s[i] = '.';
    }
  }
  cout << s << endl;
  return 0;
}