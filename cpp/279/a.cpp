#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  string s;
  cin >> s;
  const char *c = s.c_str();

  int n = 0;
  for (size_t i = 0; i < s.length(); i++)
  {
    if (c[i] == 'v')
    {
      n += 1;
    }
    if (c[i] == 'w')
    {
      n += 2;
    }
  }
  cout << n << endl;
  return 0;
}