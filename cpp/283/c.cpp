#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  string s;
  cin >> s;
  int count = 0;
  size_t pos = s.find("00");
  while (pos != std::string::npos)
  {
    count++;
    pos = s.find("00", pos + 2);
  }
  cout << s.length() - count << endl;
  return 0;
}