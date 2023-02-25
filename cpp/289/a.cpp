#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  for (int i = 0; i < S.length(); i++)
  {
    if (S[i] == '0')
    {
      cout << 1;
    }
    else
    {
      cout << 0;
    }
  }
  cout << endl;
  return 0;
}