#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] != t[i])
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << t.length() << endl;
  return 0;
}
