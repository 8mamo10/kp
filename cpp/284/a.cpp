#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> s(n);
  for (auto &itr : s)
  {
    cin >> itr;
  }
  reverse(s.begin(), s.end());
  for (auto itr : s)
  {
    cout << itr << endl;
  }
  return 0;
}