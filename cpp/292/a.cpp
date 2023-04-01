#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int diff = 'A' - 'a';
  for (auto itr : S)
  {
    cout << (char)(itr + diff);
  }
  cout << endl;
  return 0;
}