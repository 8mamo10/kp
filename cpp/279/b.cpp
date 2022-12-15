#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  string s, t;
  cin >> s >> t;

  if (s.length() < t.length())
  {
    cout << "No" << endl;
    return 0;
  }
  for (size_t i = 0; i <= s.length() - t.length(); i++)
  {
    if (s.substr(i, t.length()) == t)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}