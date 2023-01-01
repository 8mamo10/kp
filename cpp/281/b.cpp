#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  if (s.length() != 8)
  {
    cout << "No" << endl;
    return 0;
  }
  if (!isalpha(s[0]) || !isalpha(s[7]))
  {
    cout << "No" << endl;
    return 0;
  }
  string sub = s.substr(1, 6);
  int num = atoi(sub.c_str());
  if (num < 100000)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
