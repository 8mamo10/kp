#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  for (size_t i = 0; i < (S.length() / 2); i++)
  {
    swap(S[i * 2], S[i * 2 + 1]);
  }
  cout << S << endl;
  return 0;
}