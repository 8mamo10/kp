#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  for (size_t i = 0; i < S.length(); i++)
  {
    if ('A' <= S[i] && S[i] <= 'Z')
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}