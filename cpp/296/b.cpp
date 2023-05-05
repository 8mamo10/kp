#include <bits/stdc++.h>
using namespace std;

int main()
{
  // a8 ... h8
  // ...
  // a1 ... h1
  vector<string> S(8);
  for (int i = 0; i < 8; i++)
  {
    cin >> S[i];
  }
  for (int i = 0; i < 8; i++)
  {
    string line = S[i];
    size_t pos = line.find("*");
    if (pos == string::npos)
    {
      continue;
    }
    char x = 'a' + pos;
    cout << x << 8 - i << endl;
    return 0;
  }
  return 0;
}